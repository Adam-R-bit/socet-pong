// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vpaddle_logic.h for the primary calling header

#include "Vpaddle_logic__pch.h"
#include "Vpaddle_logic___024root.h"

VL_ATTR_COLD void Vpaddle_logic___024root___eval_static__TOP(Vpaddle_logic___024root* vlSelf);

VL_ATTR_COLD void Vpaddle_logic___024root___eval_static(Vpaddle_logic___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vpaddle_logic__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpaddle_logic___024root___eval_static\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vpaddle_logic___024root___eval_static__TOP(vlSelf);
}

VL_ATTR_COLD void Vpaddle_logic___024root___eval_static__TOP(Vpaddle_logic___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vpaddle_logic__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpaddle_logic___024root___eval_static__TOP\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_ball_logic__DOT__CLK = 0U;
}

VL_ATTR_COLD void Vpaddle_logic___024root___eval_final(Vpaddle_logic___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vpaddle_logic__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpaddle_logic___024root___eval_final\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vpaddle_logic___024root___dump_triggers__stl(Vpaddle_logic___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vpaddle_logic___024root___eval_phase__stl(Vpaddle_logic___024root* vlSelf);

VL_ATTR_COLD void Vpaddle_logic___024root___eval_settle(Vpaddle_logic___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vpaddle_logic__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpaddle_logic___024root___eval_settle\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VstlIterCount;
    CData/*0:0*/ __VstlContinue;
    // Body
    __VstlIterCount = 0U;
    vlSelfRef.__VstlFirstIteration = 1U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        if (VL_UNLIKELY((0x64U < __VstlIterCount))) {
#ifdef VL_DEBUG
            Vpaddle_logic___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("tb/tb_paddle_logic.sv", 1, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (Vpaddle_logic___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelfRef.__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vpaddle_logic___024root___dump_triggers__stl(Vpaddle_logic___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vpaddle_logic__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpaddle_logic___024root___dump_triggers__stl\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VstlTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

void Vpaddle_logic___024root___act_comb__TOP__0(Vpaddle_logic___024root* vlSelf);

VL_ATTR_COLD void Vpaddle_logic___024root___eval_stl(Vpaddle_logic___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vpaddle_logic__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpaddle_logic___024root___eval_stl\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        Vpaddle_logic___024root___act_comb__TOP__0(vlSelf);
    }
}

VL_ATTR_COLD void Vpaddle_logic___024root___eval_triggers__stl(Vpaddle_logic___024root* vlSelf);

VL_ATTR_COLD bool Vpaddle_logic___024root___eval_phase__stl(Vpaddle_logic___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vpaddle_logic__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpaddle_logic___024root___eval_phase__stl\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    Vpaddle_logic___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelfRef.__VstlTriggered.any();
    if (__VstlExecute) {
        Vpaddle_logic___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vpaddle_logic___024root___dump_triggers__act(Vpaddle_logic___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vpaddle_logic__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpaddle_logic___024root___dump_triggers__act\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VactTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge tb_ball_logic.CLK)\n");
    }
    if ((2ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @(negedge tb_ball_logic.nRST)\n");
    }
    if ((4ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 2 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vpaddle_logic___024root___dump_triggers__nba(Vpaddle_logic___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vpaddle_logic__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpaddle_logic___024root___dump_triggers__nba\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VnbaTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge tb_ball_logic.CLK)\n");
    }
    if ((2ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @(negedge tb_ball_logic.nRST)\n");
    }
    if ((4ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 2 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vpaddle_logic___024root___ctor_var_reset(Vpaddle_logic___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vpaddle_logic__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpaddle_logic___024root___ctor_var_reset\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->tb_ball_logic__DOT__frame = VL_RAND_RESET_I(1);
    vlSelf->tb_ball_logic__DOT__movement_up = VL_RAND_RESET_I(1);
    vlSelf->tb_ball_logic__DOT__movement_down = VL_RAND_RESET_I(1);
    vlSelf->tb_ball_logic__DOT__nRST = VL_RAND_RESET_I(1);
    vlSelf->tb_ball_logic__DOT__CLK = VL_RAND_RESET_I(1);
    vlSelf->tb_ball_logic__DOT__next_pos = VL_RAND_RESET_I(8);
    vlSelf->tb_ball_logic__DOT__test_number = 0;
    vlSelf->tb_ball_logic__DOT__num_passed = 0;
    vlSelf->tb_ball_logic__DOT__i = 0;
    vlSelf->tb_ball_logic__DOT__dut__DOT__pos = VL_RAND_RESET_I(8);
    vlSelf->__Vtrigprevexpr___TOP__tb_ball_logic__DOT__CLK__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__tb_ball_logic__DOT__nRST__0 = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
