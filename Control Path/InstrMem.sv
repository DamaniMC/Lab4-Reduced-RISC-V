module InstrMem #(
    parameter ADDRESS_WIDTH  = 8,
                DATA_WIDTH = 32
)(
    input logic [ADDRESS_WIDTH-1:0] addr,
    output logic [DATA_WIDTH-1:0] dout
);

logic [DATA_WIDTH-1:0] rom_array [2**ADDRESS_WIDTH-1:0];

initial begin 
    $display("Loading rom...");
    $readmemh("test.mem",rom_array);
end;

always_comb begin
    dout <= rom_array [addr];
end 
endmodule

