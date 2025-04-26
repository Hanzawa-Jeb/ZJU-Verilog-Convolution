module Multiplier #(
    parameter LEN = 32
) (
    input clk,
    input rst,
    input [LEN-1:0] multiplicand,
    input [LEN-1:0] multiplier,
    input start,
    
    output [LEN*2-1:0] product,
    output finish
);

    localparam PRODUCT_LEN = LEN*2;
    //len of the product register
    logic [LEN-1:0] multiplicand_reg;
    //initialize the multiplicand register
    logic [PRODUCT_LEN-1:0] product_reg;
    //initialize the product register
    localparam CNT_LEN = $clog2(LEN);
    //get the ceiling of log2(LEN)
    //length of the register of total count
    localparam CNT_NUM = LEN - 1;
    //count of the adding times
    typedef enum logic [1:0] {IDLE, WORK, FINAL} fsm_state;
    //state initialization
    fsm_state fsm_state_reg;
    //register to store all the states
    logic [CNT_LEN-1:0] work_cnt;
    //work_cnt to 0->end the procedure
    logic finish_reg = 0;
    logic [LEN:0] add_result;

    always_ff@(posedge clk or posedge rst)begin
        //used to implement state transfer
        if (rst) begin
            fsm_state_reg <= IDLE;
        end else begin
            case(fsm_state_reg)
                IDLE:
                if(start) fsm_state_reg <= WORK;
                else fsm_state_reg <= IDLE;
                WORK:
                if(work_cnt == 0) fsm_state_reg <= FINAL;
                FINAL:
                fsm_state_reg <= IDLE;
                default:
                fsm_state_reg <= IDLE;
            endcase
        end
    end

    always_comb begin
        add_result = {1'b0, product_reg[PRODUCT_LEN-1:LEN]} + {1'b0, multiplicand_reg};
    end

    always_ff@(posedge clk)begin
        case(fsm_state_reg)
            IDLE: begin
                multiplicand_reg <= multiplicand;
                product_reg <= {{LEN{1'b0}}, multiplier};
                finish_reg <= 0;
                work_cnt <= (CNT_LEN)'(LEN - 1);
            end
            WORK: begin
                work_cnt <= work_cnt - 1;
                if (product_reg[0]) begin
                    //calculate the carry signal and concat.
                    product_reg <= {add_result[LEN], add_result[LEN-1:0], product_reg[LEN-1:1]};
                end else begin
                    product_reg <= {1'b0, product_reg[PRODUCT_LEN-1:1]};
                    //implement right shift with indexing
                end
            end
            FINAL: begin
                product_reg <= product_reg;
                finish_reg <= 1;
            end
            default: product_reg <= product_reg;
        endcase
    end

    assign product = product_reg;
    assign finish = finish_reg;
    //control signal and output signal

endmodule