`include"conv_struct.vh"
module Testbench;

    import Conv::*;

    reg clk;
    reg rst;
    data_t in_data;
    data_vector kernel;
    reg in_valid;
    wire in_ready;
    result_t result;
    wire out_valid;
    wire out_ready; 

    integer i;
    integer j;
    integer seed = 0;

    initial begin
        clk=0;
        rst=1;
        #20;
        rst=0;
        #20;
        rst=0;
        in_valid = 1'b0;
        #5;
        for (i=0; i<16; i=i+1)begin
            for (j=0;j<Conv::LEN;j=j+1)begin
                kernel.data[j] = {$random(seed), $random(seed)};
            end      
            in_data = {$random(seed), $random(seed)};
            in_valid = 1'b1;
            if (in_ready) in_valid = 1'b0;
            @(posedge out_valid);
            in_valid = 1'b0;
        end
        $display("success!!!");
        $finish;
    end

    always begin
        #5;
        clk=~clk;
    end

    ConvUnit conv_unit (
        .clk(clk),
        .rst(rst),
        .in_data(in_data),
        .kernel(kernel),
        .in_valid(in_valid),
        .in_ready(in_ready),

        .result(result),
        .out_valid(out_valid),
        .out_ready(out_ready)
    );

    assign out_ready = 1'b1;

    `ifdef VERILATE
		initial begin
			$dumpfile({`TOP_DIR,"/Testbench.vcd"});
			$dumpvars(0,dut);
			$dumpon;
		end

        wire error;
        Judge judge (
            .clk(clk),
            .rst(rst),
            .in_data(in_data),
            .kernel(kernel),
            .in_valid(in_valid),
            .in_ready(in_ready),

            .result(result),
            .out_valid(out_valid),
            .out_ready(out_ready),
            .error(error)
        );

        always@(negedge clk)begin
            if(error)begin
                $display("fail!!!");
                $finish;
            end
        end
    `endif
    
endmodule
