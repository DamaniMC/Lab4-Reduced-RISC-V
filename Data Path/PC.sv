module PC#(parameter MEM_ADDRESS_WIDTH=8)(
    input logic clk,
    input logic rst,
    input logic [MEM_ADDRESS_WIDTH-1:0] next_PC,
    output logic [MEM_ADDRESS_WIDTH-1:0] PC,
);

always_ff(@posedge clk)begin 
    if(rst)
        PC<=MEM_ADDRESS_WIDTH{1'b0};
    else
        PC<=next_PC;
end

endmodule
