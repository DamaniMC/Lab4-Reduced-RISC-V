// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VCPU__Syms.h"


VL_ATTR_COLD void VCPU___024root__trace_init_sub__TOP__0(VCPU___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCPU___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+56,"clk", false,-1);
    tracep->declBit(c+57,"rst", false,-1);
    tracep->declBus(c+58,"a0", false,-1, 31,0);
    tracep->pushNamePrefix("CPU ");
    tracep->declBus(c+59,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+60,"MEM_ADDRESS_WIDTH", false,-1, 31,0);
    tracep->declBus(c+61,"REG_ADDRESS_WIDTH", false,-1, 31,0);
    tracep->declBit(c+56,"clk", false,-1);
    tracep->declBit(c+57,"rst", false,-1);
    tracep->declBus(c+58,"a0", false,-1, 31,0);
    tracep->declBus(c+1,"PC", false,-1, 7,0);
    tracep->declBit(c+2,"EQ", false,-1);
    tracep->declBus(c+3,"ImmOp", false,-1, 31,0);
    tracep->declBit(c+4,"ALUsrc", false,-1);
    tracep->declBus(c+5,"ALUctrl", false,-1, 2,0);
    tracep->declBit(c+6,"RegWrite", false,-1);
    tracep->declBus(c+7,"rs1", false,-1, 4,0);
    tracep->declBus(c+8,"rs2", false,-1, 4,0);
    tracep->declBus(c+9,"rd", false,-1, 4,0);
    tracep->declBit(c+10,"PCsrc", false,-1);
    tracep->pushNamePrefix("controlPath ");
    tracep->declBus(c+59,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+61,"REG_ADDRESS_WIDTH", false,-1, 31,0);
    tracep->declBus(c+60,"MEM_ADDRESS_WIDTH", false,-1, 31,0);
    tracep->declBus(c+1,"PC", false,-1, 7,0);
    tracep->declBit(c+2,"EQ", false,-1);
    tracep->declBus(c+3,"ImmOp", false,-1, 31,0);
    tracep->declBit(c+4,"ALUsrc", false,-1);
    tracep->declBus(c+5,"ALUctrl", false,-1, 2,0);
    tracep->declBit(c+6,"RegWrite", false,-1);
    tracep->declBus(c+7,"rs1", false,-1, 4,0);
    tracep->declBus(c+8,"rs2", false,-1, 4,0);
    tracep->declBus(c+9,"rd", false,-1, 4,0);
    tracep->declBit(c+10,"PCsrc", false,-1);
    tracep->declBus(c+11,"ImmSrc", false,-1, 1,0);
    tracep->declBus(c+12,"Instr", false,-1, 31,0);
    tracep->pushNamePrefix("controlUnit ");
    tracep->declBus(c+59,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+12,"Instr", false,-1, 31,0);
    tracep->declBit(c+2,"EQ", false,-1);
    tracep->declBus(c+11,"ImmSrc", false,-1, 1,0);
    tracep->declBit(c+10,"PCsrc", false,-1);
    tracep->declBus(c+5,"ALUctrl", false,-1, 2,0);
    tracep->declBit(c+4,"ALUsrc", false,-1);
    tracep->declBit(c+6,"RegWrite", false,-1);
    tracep->declBus(c+13,"op", false,-1, 6,0);
    tracep->declBus(c+14,"funct3", false,-1, 2,0);
    tracep->declBus(c+15,"funct7", false,-1, 6,0);
    tracep->declBit(c+16,"Branch", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("instrMem ");
    tracep->declBus(c+60,"ADDRESS_WIDTH", false,-1, 31,0);
    tracep->declBus(c+59,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+1,"addr", false,-1, 7,0);
    tracep->declBus(c+12,"dout", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("signExtend ");
    tracep->declBus(c+59,"INSTR_WIDTH", false,-1, 31,0);
    tracep->declBus(c+12,"Instr", false,-1, 31,0);
    tracep->declBus(c+11,"ImmSrc", false,-1, 1,0);
    tracep->declBus(c+3,"ImmOp", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("dataPath ");
    tracep->declBus(c+60,"MEM_ADDRESS_WIDTH", false,-1, 31,0);
    tracep->declBus(c+61,"REG_ADDRESS_WIDTH", false,-1, 31,0);
    tracep->declBus(c+59,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBit(c+2,"EQ", false,-1);
    tracep->declBus(c+1,"PC", false,-1, 7,0);
    tracep->declBus(c+58,"a0", false,-1, 31,0);
    tracep->declBus(c+3,"ImmOp", false,-1, 31,0);
    tracep->declBus(c+7,"rs1", false,-1, 4,0);
    tracep->declBus(c+8,"rs2", false,-1, 4,0);
    tracep->declBus(c+9,"rd", false,-1, 4,0);
    tracep->declBit(c+6,"RegWrite", false,-1);
    tracep->declBit(c+4,"ALUsrc", false,-1);
    tracep->declBus(c+5,"ALUctrl", false,-1, 2,0);
    tracep->declBit(c+56,"clk", false,-1);
    tracep->declBit(c+57,"rst", false,-1);
    tracep->declBit(c+10,"PCsrc", false,-1);
    tracep->declBus(c+17,"ALUout", false,-1, 31,0);
    tracep->declBus(c+18,"ALUop1", false,-1, 31,0);
    tracep->declBus(c+19,"ALUop2", false,-1, 31,0);
    tracep->declBus(c+20,"regOp2", false,-1, 31,0);
    tracep->declBus(c+21,"next_PC", false,-1, 7,0);
    tracep->pushNamePrefix("alu ");
    tracep->declBus(c+59,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+18,"op1", false,-1, 31,0);
    tracep->declBus(c+19,"op2", false,-1, 31,0);
    tracep->declBus(c+5,"ctrl", false,-1, 2,0);
    tracep->declBus(c+17,"sum", false,-1, 31,0);
    tracep->declBit(c+2,"eq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("aluMux ");
    tracep->declBus(c+59,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+20,"a", false,-1, 31,0);
    tracep->declBus(c+3,"b", false,-1, 31,0);
    tracep->declBit(c+4,"sel", false,-1);
    tracep->declBus(c+19,"out", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("pcMux ");
    tracep->declBus(c+60,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+22,"a", false,-1, 7,0);
    tracep->declBus(c+23,"b", false,-1, 7,0);
    tracep->declBit(c+10,"sel", false,-1);
    tracep->declBus(c+21,"out", false,-1, 7,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("pcReg ");
    tracep->declBus(c+60,"MEM_ADDRESS_WIDTH", false,-1, 31,0);
    tracep->declBit(c+56,"clk", false,-1);
    tracep->declBit(c+57,"rst", false,-1);
    tracep->declBus(c+21,"next_PC", false,-1, 7,0);
    tracep->declBus(c+1,"PC", false,-1, 7,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("regFile ");
    tracep->declBus(c+61,"ADDRESS_WIDTH", false,-1, 31,0);
    tracep->declBus(c+59,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBit(c+56,"clk", false,-1);
    tracep->declBit(c+6,"we3", false,-1);
    tracep->declBus(c+7,"ad1", false,-1, 4,0);
    tracep->declBus(c+8,"ad2", false,-1, 4,0);
    tracep->declBus(c+9,"ad3", false,-1, 4,0);
    tracep->declBus(c+17,"wd3", false,-1, 31,0);
    tracep->declBus(c+18,"rd1", false,-1, 31,0);
    tracep->declBus(c+20,"rd2", false,-1, 31,0);
    tracep->declBus(c+58,"a0", false,-1, 31,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+24+i*1,"regArray", true,(i+0), 31,0);
    }
    tracep->popNamePrefix(3);
}

VL_ATTR_COLD void VCPU___024root__trace_init_top(VCPU___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCPU___024root__trace_init_top\n"); );
    // Body
    VCPU___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void VCPU___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void VCPU___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void VCPU___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void VCPU___024root__trace_register(VCPU___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCPU___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&VCPU___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&VCPU___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&VCPU___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void VCPU___024root__trace_full_sub_0(VCPU___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void VCPU___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCPU___024root__trace_full_top_0\n"); );
    // Init
    VCPU___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VCPU___024root*>(voidSelf);
    VCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    VCPU___024root__trace_full_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void VCPU___024root__trace_full_sub_0(VCPU___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    VCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCPU___024root__trace_full_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullCData(oldp+1,(vlSelf->CPU__DOT__PC),8);
    bufp->fullBit(oldp+2,(vlSelf->CPU__DOT__EQ));
    bufp->fullIData(oldp+3,(vlSelf->CPU__DOT__ImmOp),32);
    bufp->fullBit(oldp+4,(vlSelf->CPU__DOT__ALUsrc));
    bufp->fullCData(oldp+5,(vlSelf->CPU__DOT__ALUctrl),3);
    bufp->fullBit(oldp+6,(vlSelf->CPU__DOT__RegWrite));
    bufp->fullCData(oldp+7,((0x1fU & (vlSelf->CPU__DOT__controlPath__DOT__Instr 
                                      >> 0xfU))),5);
    bufp->fullCData(oldp+8,((0x1fU & (vlSelf->CPU__DOT__controlPath__DOT__Instr 
                                      >> 0x14U))),5);
    bufp->fullCData(oldp+9,((0x1fU & (vlSelf->CPU__DOT__controlPath__DOT__Instr 
                                      >> 7U))),5);
    bufp->fullBit(oldp+10,(vlSelf->CPU__DOT__PCsrc));
    bufp->fullCData(oldp+11,(vlSelf->CPU__DOT__controlPath__DOT__ImmSrc),2);
    bufp->fullIData(oldp+12,(vlSelf->CPU__DOT__controlPath__DOT__Instr),32);
    bufp->fullCData(oldp+13,((0x7fU & vlSelf->CPU__DOT__controlPath__DOT__Instr)),7);
    bufp->fullCData(oldp+14,((7U & (vlSelf->CPU__DOT__controlPath__DOT__Instr 
                                    >> 0xcU))),3);
    bufp->fullCData(oldp+15,((vlSelf->CPU__DOT__controlPath__DOT__Instr 
                              >> 0x19U)),7);
    bufp->fullBit(oldp+16,(vlSelf->CPU__DOT__controlPath__DOT__controlUnit__DOT__Branch));
    bufp->fullIData(oldp+17,(vlSelf->CPU__DOT__dataPath__DOT__ALUout),32);
    bufp->fullIData(oldp+18,(vlSelf->CPU__DOT__dataPath__DOT__ALUop1),32);
    bufp->fullIData(oldp+19,(vlSelf->CPU__DOT__dataPath__DOT__ALUop2),32);
    bufp->fullIData(oldp+20,(vlSelf->CPU__DOT__dataPath__DOT__regFile__DOT__regArray
                             [(0x1fU & (vlSelf->CPU__DOT__controlPath__DOT__Instr 
                                        >> 0x14U))]),32);
    bufp->fullCData(oldp+21,((0xffU & ((IData)(vlSelf->CPU__DOT__PCsrc)
                                        ? ((IData)(vlSelf->CPU__DOT__PC) 
                                           + vlSelf->CPU__DOT__ImmOp)
                                        : ((IData)(4U) 
                                           + (IData)(vlSelf->CPU__DOT__PC))))),8);
    bufp->fullCData(oldp+22,((0xffU & ((IData)(4U) 
                                       + (IData)(vlSelf->CPU__DOT__PC)))),8);
    bufp->fullCData(oldp+23,((0xffU & ((IData)(vlSelf->CPU__DOT__PC) 
                                       + vlSelf->CPU__DOT__ImmOp))),8);
    bufp->fullIData(oldp+24,(vlSelf->CPU__DOT__dataPath__DOT__regFile__DOT__regArray[0]),32);
    bufp->fullIData(oldp+25,(vlSelf->CPU__DOT__dataPath__DOT__regFile__DOT__regArray[1]),32);
    bufp->fullIData(oldp+26,(vlSelf->CPU__DOT__dataPath__DOT__regFile__DOT__regArray[2]),32);
    bufp->fullIData(oldp+27,(vlSelf->CPU__DOT__dataPath__DOT__regFile__DOT__regArray[3]),32);
    bufp->fullIData(oldp+28,(vlSelf->CPU__DOT__dataPath__DOT__regFile__DOT__regArray[4]),32);
    bufp->fullIData(oldp+29,(vlSelf->CPU__DOT__dataPath__DOT__regFile__DOT__regArray[5]),32);
    bufp->fullIData(oldp+30,(vlSelf->CPU__DOT__dataPath__DOT__regFile__DOT__regArray[6]),32);
    bufp->fullIData(oldp+31,(vlSelf->CPU__DOT__dataPath__DOT__regFile__DOT__regArray[7]),32);
    bufp->fullIData(oldp+32,(vlSelf->CPU__DOT__dataPath__DOT__regFile__DOT__regArray[8]),32);
    bufp->fullIData(oldp+33,(vlSelf->CPU__DOT__dataPath__DOT__regFile__DOT__regArray[9]),32);
    bufp->fullIData(oldp+34,(vlSelf->CPU__DOT__dataPath__DOT__regFile__DOT__regArray[10]),32);
    bufp->fullIData(oldp+35,(vlSelf->CPU__DOT__dataPath__DOT__regFile__DOT__regArray[11]),32);
    bufp->fullIData(oldp+36,(vlSelf->CPU__DOT__dataPath__DOT__regFile__DOT__regArray[12]),32);
    bufp->fullIData(oldp+37,(vlSelf->CPU__DOT__dataPath__DOT__regFile__DOT__regArray[13]),32);
    bufp->fullIData(oldp+38,(vlSelf->CPU__DOT__dataPath__DOT__regFile__DOT__regArray[14]),32);
    bufp->fullIData(oldp+39,(vlSelf->CPU__DOT__dataPath__DOT__regFile__DOT__regArray[15]),32);
    bufp->fullIData(oldp+40,(vlSelf->CPU__DOT__dataPath__DOT__regFile__DOT__regArray[16]),32);
    bufp->fullIData(oldp+41,(vlSelf->CPU__DOT__dataPath__DOT__regFile__DOT__regArray[17]),32);
    bufp->fullIData(oldp+42,(vlSelf->CPU__DOT__dataPath__DOT__regFile__DOT__regArray[18]),32);
    bufp->fullIData(oldp+43,(vlSelf->CPU__DOT__dataPath__DOT__regFile__DOT__regArray[19]),32);
    bufp->fullIData(oldp+44,(vlSelf->CPU__DOT__dataPath__DOT__regFile__DOT__regArray[20]),32);
    bufp->fullIData(oldp+45,(vlSelf->CPU__DOT__dataPath__DOT__regFile__DOT__regArray[21]),32);
    bufp->fullIData(oldp+46,(vlSelf->CPU__DOT__dataPath__DOT__regFile__DOT__regArray[22]),32);
    bufp->fullIData(oldp+47,(vlSelf->CPU__DOT__dataPath__DOT__regFile__DOT__regArray[23]),32);
    bufp->fullIData(oldp+48,(vlSelf->CPU__DOT__dataPath__DOT__regFile__DOT__regArray[24]),32);
    bufp->fullIData(oldp+49,(vlSelf->CPU__DOT__dataPath__DOT__regFile__DOT__regArray[25]),32);
    bufp->fullIData(oldp+50,(vlSelf->CPU__DOT__dataPath__DOT__regFile__DOT__regArray[26]),32);
    bufp->fullIData(oldp+51,(vlSelf->CPU__DOT__dataPath__DOT__regFile__DOT__regArray[27]),32);
    bufp->fullIData(oldp+52,(vlSelf->CPU__DOT__dataPath__DOT__regFile__DOT__regArray[28]),32);
    bufp->fullIData(oldp+53,(vlSelf->CPU__DOT__dataPath__DOT__regFile__DOT__regArray[29]),32);
    bufp->fullIData(oldp+54,(vlSelf->CPU__DOT__dataPath__DOT__regFile__DOT__regArray[30]),32);
    bufp->fullIData(oldp+55,(vlSelf->CPU__DOT__dataPath__DOT__regFile__DOT__regArray[31]),32);
    bufp->fullBit(oldp+56,(vlSelf->clk));
    bufp->fullBit(oldp+57,(vlSelf->rst));
    bufp->fullIData(oldp+58,(vlSelf->a0),32);
    bufp->fullIData(oldp+59,(0x20U),32);
    bufp->fullIData(oldp+60,(8U),32);
    bufp->fullIData(oldp+61,(5U),32);
}
