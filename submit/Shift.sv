`include"conv_struct.vh"
 module Shift (
     input clk,
     input rst,
     input Conv::data_t in_data,
     input in_valid,
     output reg in_ready,
 
     output Conv::data_vector data,
     output reg out_valid,
     input out_ready
 );

     typedef enum logic {RDATA, TDATA} fsm_state;
     fsm_state state_reg;
 
     integer i;
 
     always_ff @(posedge clk or posedge rst) begin
         if (rst) begin
             state_reg <= TDATA;
             out_valid <= 1'b0;
             in_ready <= 1'b0;
             for (i=0;i<Conv::LEN;i=i+1)begin
                data.data[i] <= 0;
             end
         end else begin
             case(state_reg)
             RDATA:begin
                 if (in_valid) begin
                     for(i=0;i<Conv::LEN-1;i=i+1)begin
                         data.data[i]<=data.data[i+1];
                     end
                     data.data[Conv::LEN-1]<=in_data;
                     out_valid <= 1'b0;
                     in_ready <= 1'b0;
                     state_reg <= TDATA;
                 end else begin
                     state_reg <= RDATA;
                     out_valid <= 1'b0;
                 end
             end
             TDATA:begin
                 if (out_ready && in_valid) begin
                     state_reg <= RDATA;
                     in_ready <= 1'b1;
                     out_valid <= 1'b1;
                 end else begin
                     state_reg <= TDATA;
                 end
             end
             default:
                 state_reg <= TDATA;
             endcase
         end
     end
 
 
 endmodule