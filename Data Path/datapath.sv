module DataPath#(
    parameter MEM_ADDRESS_WIDTH=8,
    parameter REG_ADDRESS_WIDTH=5.
    parameter DATA_WIDTH=32,
)(
    logic input clk,
    logic input rst,
    logic output PC,
    logic output a0,
    logic input ImmOp,
    logic input rs1,
    logic input rs2,
    logic input rd,
    logic input RegWrite,
    logic input ALUsrc,
    logic input ALUctrl,
    logic output EQ,
 );

logic ALUout;
logic ALUop1;
logic ALUop2;
logic regOp2;
logic next_PC;

RegFile #(REG_ADDRESS_WIDTH,DATA_WIDTH)regFile(
    .clk(clk),
    .ad1(rs1),
    .ad2(rs2),
    .ad3(rd),
    .we3(RegWrite),
    .wd3(ALUout),
    .rd1(ALUop1),
    .rd2(regOp2),
    .a0(a0),
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


MUX #(DATA_WIDTH) pcMux(
    .sel(PCsrc),
    .a(PC+ImmOp),
    .b(PC+4),
    .out(next_PC)

);

PC #(MEM_ADDRESS_WIDTH,DATA_WDITH) pcReg(
    .clk(clk),
    .rst(rst),
    .next_PC(next_PC),
    .PC(PC)
)


endmodule
