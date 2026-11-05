// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vpaddle_logic.h for the primary calling header

#include "Vpaddle_logic__pch.h"
#include "Vpaddle_logic___024root.h"

VlCoroutine Vpaddle_logic___024root___eval_initial__TOP__Vtiming__0(Vpaddle_logic___024root* vlSelf);
VlCoroutine Vpaddle_logic___024root___eval_initial__TOP__Vtiming__1(Vpaddle_logic___024root* vlSelf);

void Vpaddle_logic___024root___eval_initial(Vpaddle_logic___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vpaddle_logic__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpaddle_logic___024root___eval_initial\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    Vpaddle_logic___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    Vpaddle_logic___024root___eval_initial__TOP__Vtiming__1(vlSelf);
    vlSelfRef.__Vtrigprevexpr___TOP__tb_ball_logic__DOT__CLK__0 
        = vlSelfRef.tb_ball_logic__DOT__CLK;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_ball_logic__DOT__nRST__0 
        = vlSelfRef.tb_ball_logic__DOT__nRST;
}

VL_INLINE_OPT VlCoroutine Vpaddle_logic___024root___eval_initial__TOP__Vtiming__1(Vpaddle_logic___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vpaddle_logic__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpaddle_logic___024root___eval_initial__TOP__Vtiming__1\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (1U) {
        co_await vlSelfRef.__VdlySched.delay(5ULL, 
                                             nullptr, 
                                             "tb/tb_paddle_logic.sv", 
                                             65);
        vlSelfRef.tb_ball_logic__DOT__CLK = (1U & (~ (IData)(vlSelfRef.tb_ball_logic__DOT__CLK)));
    }
}

void Vpaddle_logic___024root___act_comb__TOP__0(Vpaddle_logic___024root* vlSelf);

void Vpaddle_logic___024root___eval_act(Vpaddle_logic___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vpaddle_logic__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpaddle_logic___024root___eval_act\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((5ULL & vlSelfRef.__VactTriggered.word(0U))) {
        Vpaddle_logic___024root___act_comb__TOP__0(vlSelf);
    }
}

VL_INLINE_OPT void Vpaddle_logic___024root___act_comb__TOP__0(Vpaddle_logic___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vpaddle_logic__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpaddle_logic___024root___act_comb__TOP__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_ball_logic__DOT__next_pos = vlSelfRef.tb_ball_logic__DOT__dut__DOT__pos;
    if (vlSelfRef.tb_ball_logic__DOT__frame) {
        if (((IData)(vlSelfRef.tb_ball_logic__DOT__movement_up) 
             & (~ (IData)(vlSelfRef.tb_ball_logic__DOT__movement_down)))) {
            vlSelfRef.tb_ball_logic__DOT__next_pos 
                = ((0x64U < (0xffU & ((IData)(2U) + (IData)(vlSelfRef.tb_ball_logic__DOT__dut__DOT__pos))))
                    ? 0x64U : (0xffU & ((IData)(2U) 
                                        + (IData)(vlSelfRef.tb_ball_logic__DOT__dut__DOT__pos))));
        } else if (((IData)(vlSelfRef.tb_ball_logic__DOT__movement_down) 
                    & (~ (IData)(vlSelfRef.tb_ball_logic__DOT__movement_up)))) {
            vlSelfRef.tb_ball_logic__DOT__next_pos 
                = ((5U > (IData)(vlSelfRef.tb_ball_logic__DOT__dut__DOT__pos))
                    ? 3U : (0xffU & ((IData)(vlSelfRef.tb_ball_logic__DOT__dut__DOT__pos) 
                                     - (IData)(2U))));
        }
    }
}

void Vpaddle_logic___024root___nba_sequent__TOP__0(Vpaddle_logic___024root* vlSelf);

void Vpaddle_logic___024root___eval_nba(Vpaddle_logic___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vpaddle_logic__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpaddle_logic___024root___eval_nba\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((3ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vpaddle_logic___024root___nba_sequent__TOP__0(vlSelf);
    }
    if ((7ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vpaddle_logic___024root___act_comb__TOP__0(vlSelf);
    }
}

VL_INLINE_OPT void Vpaddle_logic___024root___nba_sequent__TOP__0(Vpaddle_logic___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vpaddle_logic__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpaddle_logic___024root___nba_sequent__TOP__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_ball_logic__DOT__dut__DOT__pos = ((IData)(vlSelfRef.tb_ball_logic__DOT__nRST)
                                                    ? (IData)(vlSelfRef.tb_ball_logic__DOT__next_pos)
                                                    : 0x32U);
}

void Vpaddle_logic___024root___timing_resume(Vpaddle_logic___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vpaddle_logic__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpaddle_logic___024root___timing_resume\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VtrigSched_h80d955bd__0.resume(
                                                   "@(posedge tb_ball_logic.CLK)");
    }
    if ((4ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VdlySched.resume();
    }
}

void Vpaddle_logic___024root___timing_commit(Vpaddle_logic___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vpaddle_logic__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpaddle_logic___024root___timing_commit\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((! (1ULL & vlSelfRef.__VactTriggered.word(0U)))) {
        vlSelfRef.__VtrigSched_h80d955bd__0.commit(
                                                   "@(posedge tb_ball_logic.CLK)");
    }
}

void Vpaddle_logic___024root___eval_triggers__act(Vpaddle_logic___024root* vlSelf);

bool Vpaddle_logic___024root___eval_phase__act(Vpaddle_logic___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vpaddle_logic__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpaddle_logic___024root___eval_phase__act\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlTriggerVec<3> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vpaddle_logic___024root___eval_triggers__act(vlSelf);
    Vpaddle_logic___024root___timing_commit(vlSelf);
    __VactExecute = vlSelfRef.__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelfRef.__VactTriggered, vlSelfRef.__VnbaTriggered);
        vlSelfRef.__VnbaTriggered.thisOr(vlSelfRef.__VactTriggered);
        Vpaddle_logic___024root___timing_resume(vlSelf);
        Vpaddle_logic___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vpaddle_logic___024root___eval_phase__nba(Vpaddle_logic___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vpaddle_logic__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpaddle_logic___024root___eval_phase__nba\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelfRef.__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vpaddle_logic___024root___eval_nba(vlSelf);
        vlSelfRef.__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vpaddle_logic___024root___dump_triggers__nba(Vpaddle_logic___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vpaddle_logic___024root___dump_triggers__act(Vpaddle_logic___024root* vlSelf);
#endif  // VL_DEBUG

void Vpaddle_logic___024root___eval(Vpaddle_logic___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vpaddle_logic__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpaddle_logic___024root___eval\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            Vpaddle_logic___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("tb/tb_paddle_logic.sv", 1, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelfRef.__VactIterCount = 0U;
        vlSelfRef.__VactContinue = 1U;
        while (vlSelfRef.__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelfRef.__VactIterCount))) {
#ifdef VL_DEBUG
                Vpaddle_logic___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("tb/tb_paddle_logic.sv", 1, "", "Active region did not converge.");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactContinue = 0U;
            if (Vpaddle_logic___024root___eval_phase__act(vlSelf)) {
                vlSelfRef.__VactContinue = 1U;
            }
        }
        if (Vpaddle_logic___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vpaddle_logic___024root___eval_debug_assertions(Vpaddle_logic___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vpaddle_logic__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpaddle_logic___024root___eval_debug_assertions\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
}
#endif  // VL_DEBUG
