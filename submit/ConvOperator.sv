`include"conv_struct.vh"
module ConvOperator(
    input clk,
    input rst,
    input Conv::data_vector kernel,
    input Conv::data_vector data,
    input in_valid,
    output reg in_ready,

    output Conv::result_t result,
    output reg out_valid,
    input out_ready
);

    localparam VECTOR_WIDTH = 2*Conv::WIDTH;
    typedef struct {
        Conv::result_t data;
        logic valid;
    } mid_vector;

    mid_vector vector_stage1 [Conv::LEN-1:0];
    mid_vector vector_stage2;

    logic mul_start = 1'b0;

    typedef enum logic [1:0] {RDATA, WORK, TDATA} fsm_state;
    fsm_state state_reg = RDATA;

    function [127:0] add128;
        input [127:0] a, b, c, d;
        begin
            add128 = a + b + c + d;
        end
    endfunction
    
    genvar i;
    generate
        for (i = 0; i < Conv::LEN; i=i+1) begin : mul_gen
            Multiplier #(
                .LEN(Conv::WIDTH)
            ) mul (
                .clk(clk),
                .rst(rst),
                .multiplicand(kernel.data[i]),
                .multiplier(data.data[i]),
                .start(mul_start),
                .product(vector_stage1[i].data),
                .finish(vector_stage1[i].valid)
            );
        end
    endgenerate

    always_ff@(posedge clk or posedge rst) begin
        if (rst) begin
            state_reg <= RDATA;
            in_ready <= 1'b1;
            out_valid <= 1'b0;
            mul_start <= 1'b0;
            vector_stage2.valid <= 1'b0;
        end else begin
            case(state_reg) 
                RDATA: begin
                    if (in_valid) begin
                        mul_start <= 1'b1;
                        in_ready <= 1'b0;
                        out_valid <= 1'b0;
                        state_reg <= WORK;
                    end else begin
                        in_ready <= 1'b1;
                        mul_start <= 1'b0;
                        vector_stage2.valid <= 1'b0;
                        vector_stage2.data <= 128'b0;
                        state_reg <= RDATA;
                        end
                    end
                WORK: begin
                    if (vector_stage1[0].valid) begin
                        vector_stage2.valid <= 1'b1;
                        vector_stage2.data <= add128(vector_stage1[0].data, vector_stage1[1].data, vector_stage1[2].data, vector_stage1[3].data);
                        state_reg <= TDATA;
                        out_valid <= 1'b1;
                        in_ready <= 1'b0;
                        mul_start <= 1'b0;
                    end else begin
                        mul_start <= 1'b0;
                        out_valid <= 1'b0;
                        in_ready <= 1'b0;
                        state_reg <= WORK;
                    end
                end
                TDATA: begin
                    if (out_ready) begin
                        state_reg <= RDATA;
                        out_valid <= 1'b0;
                        in_ready <= 1'b1;
                        mul_start <= 1'b0;
                    end else begin
                        state_reg <= TDATA;
                        out_valid <= 1'b1;
                        mul_start <= 1'b0;
                    end
                end
                default:begin
                    state_reg <= RDATA;
                end
            endcase
        end
    end

    assign result = vector_stage2.data;

endmodule