// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_fst_c.h"
#include "Vpaddle_logic__Syms.h"


void Vpaddle_logic___024root__trace_chg_0_sub_0(Vpaddle_logic___024root* vlSelf, VerilatedFst::Buffer* bufp);

void Vpaddle_logic___024root__trace_chg_0(void* voidSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpaddle_logic___024root__trace_chg_0\n"); );
    // Init
    Vpaddle_logic___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vpaddle_logic___024root*>(voidSelf);
    Vpaddle_logic__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vpaddle_logic___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vpaddle_logic___024root__trace_chg_0_sub_0(Vpaddle_logic___024root* vlSelf, VerilatedFst::Buffer* bufp) {
    (void)vlSelf;  // Prevent unused variable warning
    Vpaddle_logic__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpaddle_logic___024root__trace_chg_0_sub_0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[1U] 
                     | vlSelfRef.__Vm_traceActivity
                     [2U]))) {
        bufp->chgBit(oldp+0,(vlSelfRef.tb_ball_logic__DOT__frame));
        bufp->chgBit(oldp+1,(vlSelfRef.tb_ball_logic__DOT__movement_up));
        bufp->chgBit(oldp+2,(vlSelfRef.tb_ball_logic__DOT__movement_down));
        bufp->chgBit(oldp+3,(vlSelfRef.tb_ball_logic__DOT__nRST));
        bufp->chgIData(oldp+4,(vlSelfRef.tb_ball_logic__DOT__test_number),32);
        bufp->chgIData(oldp+5,(vlSelfRef.tb_ball_logic__DOT__num_passed),32);
    }
    bufp->chgBit(oldp+6,(vlSelfRef.tb_ball_logic__DOT__CLK));
    bufp->chgCData(oldp+7,(vlSelfRef.tb_ball_logic__DOT__next_pos),8);
    bufp->chgCData(oldp+8,(vlSelfRef.tb_ball_logic__DOT__dut__DOT__pos),8);
}

void Vpaddle_logic___024root__trace_cleanup(void* voidSelf, VerilatedFst* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpaddle_logic___024root__trace_cleanup\n"); );
    // Init
    Vpaddle_logic___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vpaddle_logic___024root*>(voidSelf);
    Vpaddle_logic__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
}
