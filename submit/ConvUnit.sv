`include"conv_struct.vh"
module ConvUnit (
    input clk,
    input rst,
    input Conv::data_t in_data,
    //typedef logic [WIDTH-1:0] data_t
    //only one integer, used to right shift the register
    input Conv::data_vector kernel,
    //data_t data [LEN-1:0],used to store the kernel of four bits
    input in_valid,
    output in_ready,
    //input data

    output Conv::result_t result,
    //typedef logic [WIDTH*2-1:0] result_t
    output out_valid,
    input out_ready
    //valid ready to the convoperator
);

    Conv::data_vector shifted_data;
    //store the shifted data from the shifter
    logic temp_valid;
    logic temp_ready;
    //used between the shifter and the ConvOperator

    Shift shift (.clk(clk), 
                 .rst(rst), 
                 .in_data(in_data), 
                 .in_valid(in_valid), 
                 .in_ready(in_ready),
                 
                 .data(shifted_data),
                 .out_valid(temp_valid),
                 .out_ready(temp_ready)
    );
    //instantiate the shifter module, connecting the wires

    ConvOperator conv (.clk(clk),
                       .rst(rst),
                       .kernel(kernel),
                       .data(shifted_data),
                       .in_valid(temp_valid),
                       .in_ready(temp_ready),

                       .result(result),
                       .out_valid(out_valid),
                       .out_ready(out_ready)
    );
    //instantiate the ConvOperator module, connecting the wires.

endmodule