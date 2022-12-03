// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VCPU__Syms.h"


void VCPU___024root__trace_chg_sub_0(VCPU___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void VCPU___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCPU___024root__trace_chg_top_0\n"); );
    // Init
    VCPU___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VCPU___024root*>(voidSelf);
    VCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    VCPU___024root__trace_chg_sub_0((&vlSymsp->TOP), bufp);
}

void VCPU___024root__trace_chg_sub_0(VCPU___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    VCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCPU___024root__trace_chg_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        bufp->chgCData(oldp+0,(vlSelf->CPU__DOT__PC),8);
        bufp->chgBit(oldp+1,(vlSelf->CPU__DOT__EQ));
        bufp->chgIData(oldp+2,(vlSelf->CPU__DOT__ImmOp),32);
        bufp->chgBit(oldp+3,(vlSelf->CPU__DOT__ALUsrc));
        bufp->chgCData(oldp+4,(vlSelf->CPU__DOT__ALUctrl),3);
        bufp->chgBit(oldp+5,(vlSelf->CPU__DOT__RegWrite));
        bufp->chgCData(oldp+6,((0x1fU & (vlSelf->CPU__DOT__controlPath__DOT__Instr 
                                         >> 0xfU))),5);
        bufp->chgCData(oldp+7,((0x1fU & (vlSelf->CPU__DOT__controlPath__DOT__Instr 
                                         >> 0x14U))),5);
        bufp->chgCData(oldp+8,((0x1fU & (vlSelf->CPU__DOT__controlPath__DOT__Instr 
                                         >> 7U))),5);
        bufp->chgBit(oldp+9,(vlSelf->CPU__DOT__PCsrc));
        bufp->chgCData(oldp+10,(vlSelf->CPU__DOT__controlPath__DOT__ImmSrc),2);
        bufp->chgIData(oldp+11,(vlSelf->CPU__DOT__controlPath__DOT__Instr),32);
        bufp->chgCData(oldp+12,((0x7fU & vlSelf->CPU__DOT__controlPath__DOT__Instr)),7);
        bufp->chgCData(oldp+13,((7U & (vlSelf->CPU__DOT__controlPath__DOT__Instr 
                                       >> 0xcU))),3);
        bufp->chgCData(oldp+14,((vlSelf->CPU__DOT__controlPath__DOT__Instr 
                                 >> 0x19U)),7);
        bufp->chgBit(oldp+15,(vlSelf->CPU__DOT__controlPath__DOT__controlUnit__DOT__Branch));
        bufp->chgIData(oldp+16,(vlSelf->CPU__DOT__dataPath__DOT__ALUout),32);
        bufp->chgIData(oldp+17,(vlSelf->CPU__DOT__dataPath__DOT__ALUop1),32);
        bufp->chgIData(oldp+18,(vlSelf->CPU__DOT__dataPath__DOT__ALUop2),32);
        bufp->chgIData(oldp+19,(vlSelf->CPU__DOT__dataPath__DOT__regFile__DOT__regArray
                                [(0x1fU & (vlSelf->CPU__DOT__controlPath__DOT__Instr 
                                           >> 0x14U))]),32);
        bufp->chgCData(oldp+20,((0xffU & ((IData)(vlSelf->CPU__DOT__PCsrc)
                                           ? ((IData)(vlSelf->CPU__DOT__PC) 
                                              + vlSelf->CPU__DOT__ImmOp)
                                           : ((IData)(4U) 
                                              + (IData)(vlSelf->CPU__DOT__PC))))),8);
        bufp->chgCData(oldp+21,((0xffU & ((IData)(4U) 
                                          + (IData)(vlSelf->CPU__DOT__PC)))),8);
        bufp->chgCData(oldp+22,((0xffU & ((IData)(vlSelf->CPU__DOT__PC) 
                                          + vlSelf->CPU__DOT__ImmOp))),8);
        bufp->chgIData(oldp+23,(vlSelf->CPU__DOT__dataPath__DOT__regFile__DOT__regArray[0]),32);
        bufp->chgIData(oldp+24,(vlSelf->CPU__DOT__dataPath__DOT__regFile__DOT__regArray[1]),32);
        bufp->chgIData(oldp+25,(vlSelf->CPU__DOT__dataPath__DOT__regFile__DOT__regArray[2]),32);
        bufp->chgIData(oldp+26,(vlSelf->CPU__DOT__dataPath__DOT__regFile__DOT__regArray[3]),32);
        bufp->chgIData(oldp+27,(vlSelf->CPU__DOT__dataPath__DOT__regFile__DOT__regArray[4]),32);
        bufp->chgIData(oldp+28,(vlSelf->CPU__DOT__dataPath__DOT__regFile__DOT__regArray[5]),32);
        bufp->chgIData(oldp+29,(vlSelf->CPU__DOT__dataPath__DOT__regFile__DOT__regArray[6]),32);
        bufp->chgIData(oldp+30,(vlSelf->CPU__DOT__dataPath__DOT__regFile__DOT__regArray[7]),32);
        bufp->chgIData(oldp+31,(vlSelf->CPU__DOT__dataPath__DOT__regFile__DOT__regArray[8]),32);
        bufp->chgIData(oldp+32,(vlSelf->CPU__DOT__dataPath__DOT__regFile__DOT__regArray[9]),32);
        bufp->chgIData(oldp+33,(vlSelf->CPU__DOT__dataPath__DOT__regFile__DOT__regArray[10]),32);
        bufp->chgIData(oldp+34,(vlSelf->CPU__DOT__dataPath__DOT__regFile__DOT__regArray[11]),32);
        bufp->chgIData(oldp+35,(vlSelf->CPU__DOT__dataPath__DOT__regFile__DOT__regArray[12]),32);
        bufp->chgIData(oldp+36,(vlSelf->CPU__DOT__dataPath__DOT__regFile__DOT__regArray[13]),32);
        bufp->chgIData(oldp+37,(vlSelf->CPU__DOT__dataPath__DOT__regFile__DOT__regArray[14]),32);
        bufp->chgIData(oldp+38,(vlSelf->CPU__DOT__dataPath__DOT__regFile__DOT__regArray[15]),32);
        bufp->chgIData(oldp+39,(vlSelf->CPU__DOT__dataPath__DOT__regFile__DOT__regArray[16]),32);
        bufp->chgIData(oldp+40,(vlSelf->CPU__DOT__dataPath__DOT__regFile__DOT__regArray[17]),32);
        bufp->chgIData(oldp+41,(vlSelf->CPU__DOT__dataPath__DOT__regFile__DOT__regArray[18]),32);
        bufp->chgIData(oldp+42,(vlSelf->CPU__DOT__dataPath__DOT__regFile__DOT__regArray[19]),32);
        bufp->chgIData(oldp+43,(vlSelf->CPU__DOT__dataPath__DOT__regFile__DOT__regArray[20]),32);
        bufp->chgIData(oldp+44,(vlSelf->CPU__DOT__dataPath__DOT__regFile__DOT__regArray[21]),32);
        bufp->chgIData(oldp+45,(vlSelf->CPU__DOT__dataPath__DOT__regFile__DOT__regArray[22]),32);
        bufp->chgIData(oldp+46,(vlSelf->CPU__DOT__dataPath__DOT__regFile__DOT__regArray[23]),32);
        bufp->chgIData(oldp+47,(vlSelf->CPU__DOT__dataPath__DOT__regFile__DOT__regArray[24]),32);
        bufp->chgIData(oldp+48,(vlSelf->CPU__DOT__dataPath__DOT__regFile__DOT__regArray[25]),32);
        bufp->chgIData(oldp+49,(vlSelf->CPU__DOT__dataPath__DOT__regFile__DOT__regArray[26]),32);
        bufp->chgIData(oldp+50,(vlSelf->CPU__DOT__dataPath__DOT__regFile__DOT__regArray[27]),32);
        bufp->chgIData(oldp+51,(vlSelf->CPU__DOT__dataPath__DOT__regFile__DOT__regArray[28]),32);
        bufp->chgIData(oldp+52,(vlSelf->CPU__DOT__dataPath__DOT__regFile__DOT__regArray[29]),32);
        bufp->chgIData(oldp+53,(vlSelf->CPU__DOT__dataPath__DOT__regFile__DOT__regArray[30]),32);
        bufp->chgIData(oldp+54,(vlSelf->CPU__DOT__dataPath__DOT__regFile__DOT__regArray[31]),32);
    }
    bufp->chgBit(oldp+55,(vlSelf->clk));
    bufp->chgBit(oldp+56,(vlSelf->rst));
    bufp->chgIData(oldp+57,(vlSelf->a0),32);
}

void VCPU___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCPU___024root__trace_cleanup\n"); );
    // Init
    VCPU___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VCPU___024root*>(voidSelf);
    VCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
}
