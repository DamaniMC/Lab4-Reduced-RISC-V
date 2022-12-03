module DataPath #(
    parameter MEM_ADDRESS_WIDTH=8,
    REG_ADDRESS_WIDTH=5,
    DATA_WIDTH=32)
(
    output logic EQ,
    output logic [MEM_ADDRESS_WIDTH-1:0] PC,
    output logic [DATA_WIDTH-1:0] a0,
    input logic [DATA_WIDTH-1:0] ImmOp,
    input logic [REG_ADDRESS_WIDTH-1:0] rs1,
    input logic [REG_ADDRESS_WIDTH-1:0] rs2,
    input logic [REG_ADDRESS_WIDTH-1:0] rd,
    input logic RegWrite,
    input logic ALUsrc,
    input logic [2:0] ALUctrl,
    input logic clk,
    input logic rst,
    input logic PCsrc
 );

logic [DATA_WIDTH-1:0] ALUout;
logic [DATA_WIDTH-1:0] ALUop1;
logic [DATA_WIDTH-1:0] ALUop2;
logic [DATA_WIDTH-1:0] regOp2;
logic [MEM_ADDRESS_WIDTH-1:0] next_PC;

RegFile #(REG_ADDRESS_WIDTH,DATA_WIDTH) regFile(
    .clk(clk),
    .ad1(rs1),
    .ad2(rs2),
    .ad3(rd),
    .we3(RegWrite),
    .wd3(ALUout),
    .rd1(ALUop1),
    .rd2(regOp2),
    .a0(a0)
);

MUX #(DATA_WIDTH) aluMux(
    .a(regOp2),
    .b(ImmOp),
    .sel(ALUsrc),
    .out(ALUop2)
);

ALU #(DATA_WIDTH) alu(
    .op1(ALUop1),
    .op2(ALUop2),
    .ctrl(ALUctrl),
    .sum(ALUout),
    .eq(EQ)
);


MUX #(MEM_ADDRESS_WIDTH) pcMux(
    .sel(PCsrc),
    .a(PC+8'd4),
    .b(PC+ImmOp[MEM_ADDRESS_WIDTH-1:0]),
    .out(next_PC)

);

PC #(MEM_ADDRESS_WIDTH) pcReg(
    .clk(clk),
    .rst(rst),
    .next_PC(next_PC),
    .PC(PC)
);
initial begin
    PC=0;
end
endmodule
