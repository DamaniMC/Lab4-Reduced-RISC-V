module RegFile #(
    parameter ADDRESS_WIDTH=8,
              DATA_WIDTH=32
)(
    input logic clk, we3
    input logic[ADDRESS_WIDTH-1:0] ad1, ad2, ad3,
    input logic [DATA_WIDTH-1:0] wd3,
    output logic[DATA_WIDTH-1:0] rd1, rd2
    output logic [DATA_WIDTH-1:0]a0
);

logic [DATA_WIDTH-1:0] regArray [2**ADDRESS_WIDTH-1:0];

always_ff @(posedge clk) begin
    if(we3)begin
        regArray[ad3]=wd3;
    end
end

always_comb begin 
    rd1<=regArray[ad1];
    rd2<=regArray[ad2];
    a0<=regArray[10]; 
end

endmodule