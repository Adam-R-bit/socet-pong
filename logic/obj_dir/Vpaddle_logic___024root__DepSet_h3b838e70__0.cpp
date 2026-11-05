// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vpaddle_logic.h for the primary calling header

#include "Vpaddle_logic__pch.h"
#include "Vpaddle_logic__Syms.h"
#include "Vpaddle_logic___024root.h"

VL_INLINE_OPT VlCoroutine Vpaddle_logic___024root___eval_initial__TOP__Vtiming__0(Vpaddle_logic___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vpaddle_logic__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpaddle_logic___024root___eval_initial__TOP__Vtiming__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __Vtask_tb_ball_logic__DOT__apply_movements__1__enable;
    __Vtask_tb_ball_logic__DOT__apply_movements__1__enable = 0;
    CData/*0:0*/ __Vtask_tb_ball_logic__DOT__apply_movements__1__rst;
    __Vtask_tb_ball_logic__DOT__apply_movements__1__rst = 0;
    CData/*0:0*/ __Vtask_tb_ball_logic__DOT__apply_movements__1__up;
    __Vtask_tb_ball_logic__DOT__apply_movements__1__up = 0;
    CData/*0:0*/ __Vtask_tb_ball_logic__DOT__apply_movements__1__down;
    __Vtask_tb_ball_logic__DOT__apply_movements__1__down = 0;
    CData/*7:0*/ __Vtask_tb_ball_logic__DOT__checkMatch__2__expected_pos;
    __Vtask_tb_ball_logic__DOT__checkMatch__2__expected_pos = 0;
    CData/*0:0*/ __Vtask_tb_ball_logic__DOT__holdDown__3__direction;
    __Vtask_tb_ball_logic__DOT__holdDown__3__direction = 0;
    IData/*31:0*/ __Vtask_tb_ball_logic__DOT__holdDown__3__times;
    __Vtask_tb_ball_logic__DOT__holdDown__3__times = 0;
    IData/*31:0*/ __Vtask_tb_ball_logic__DOT__holdDown__3__unnamedblk1__DOT__i;
    __Vtask_tb_ball_logic__DOT__holdDown__3__unnamedblk1__DOT__i = 0;
    IData/*31:0*/ __Vtask_tb_ball_logic__DOT__holdDown__3__unnamedblk2__DOT__i;
    __Vtask_tb_ball_logic__DOT__holdDown__3__unnamedblk2__DOT__i = 0;
    CData/*0:0*/ __Vtask_tb_ball_logic__DOT__apply_movements__4__enable;
    __Vtask_tb_ball_logic__DOT__apply_movements__4__enable = 0;
    CData/*0:0*/ __Vtask_tb_ball_logic__DOT__apply_movements__4__rst;
    __Vtask_tb_ball_logic__DOT__apply_movements__4__rst = 0;
    CData/*0:0*/ __Vtask_tb_ball_logic__DOT__apply_movements__4__up;
    __Vtask_tb_ball_logic__DOT__apply_movements__4__up = 0;
    CData/*0:0*/ __Vtask_tb_ball_logic__DOT__apply_movements__4__down;
    __Vtask_tb_ball_logic__DOT__apply_movements__4__down = 0;
    CData/*0:0*/ __Vtask_tb_ball_logic__DOT__apply_movements__5__enable;
    __Vtask_tb_ball_logic__DOT__apply_movements__5__enable = 0;
    CData/*0:0*/ __Vtask_tb_ball_logic__DOT__apply_movements__5__rst;
    __Vtask_tb_ball_logic__DOT__apply_movements__5__rst = 0;
    CData/*0:0*/ __Vtask_tb_ball_logic__DOT__apply_movements__5__up;
    __Vtask_tb_ball_logic__DOT__apply_movements__5__up = 0;
    CData/*0:0*/ __Vtask_tb_ball_logic__DOT__apply_movements__5__down;
    __Vtask_tb_ball_logic__DOT__apply_movements__5__down = 0;
    CData/*7:0*/ __Vtask_tb_ball_logic__DOT__checkMatch__6__expected_pos;
    __Vtask_tb_ball_logic__DOT__checkMatch__6__expected_pos = 0;
    CData/*0:0*/ __Vtask_tb_ball_logic__DOT__holdDown__7__direction;
    __Vtask_tb_ball_logic__DOT__holdDown__7__direction = 0;
    IData/*31:0*/ __Vtask_tb_ball_logic__DOT__holdDown__7__times;
    __Vtask_tb_ball_logic__DOT__holdDown__7__times = 0;
    IData/*31:0*/ __Vtask_tb_ball_logic__DOT__holdDown__7__unnamedblk1__DOT__i;
    __Vtask_tb_ball_logic__DOT__holdDown__7__unnamedblk1__DOT__i = 0;
    IData/*31:0*/ __Vtask_tb_ball_logic__DOT__holdDown__7__unnamedblk2__DOT__i;
    __Vtask_tb_ball_logic__DOT__holdDown__7__unnamedblk2__DOT__i = 0;
    CData/*0:0*/ __Vtask_tb_ball_logic__DOT__apply_movements__8__enable;
    __Vtask_tb_ball_logic__DOT__apply_movements__8__enable = 0;
    CData/*0:0*/ __Vtask_tb_ball_logic__DOT__apply_movements__8__rst;
    __Vtask_tb_ball_logic__DOT__apply_movements__8__rst = 0;
    CData/*0:0*/ __Vtask_tb_ball_logic__DOT__apply_movements__8__up;
    __Vtask_tb_ball_logic__DOT__apply_movements__8__up = 0;
    CData/*0:0*/ __Vtask_tb_ball_logic__DOT__apply_movements__8__down;
    __Vtask_tb_ball_logic__DOT__apply_movements__8__down = 0;
    CData/*0:0*/ __Vtask_tb_ball_logic__DOT__apply_movements__9__enable;
    __Vtask_tb_ball_logic__DOT__apply_movements__9__enable = 0;
    CData/*0:0*/ __Vtask_tb_ball_logic__DOT__apply_movements__9__rst;
    __Vtask_tb_ball_logic__DOT__apply_movements__9__rst = 0;
    CData/*0:0*/ __Vtask_tb_ball_logic__DOT__apply_movements__9__up;
    __Vtask_tb_ball_logic__DOT__apply_movements__9__up = 0;
    CData/*0:0*/ __Vtask_tb_ball_logic__DOT__apply_movements__9__down;
    __Vtask_tb_ball_logic__DOT__apply_movements__9__down = 0;
    CData/*7:0*/ __Vtask_tb_ball_logic__DOT__checkMatch__10__expected_pos;
    __Vtask_tb_ball_logic__DOT__checkMatch__10__expected_pos = 0;
    CData/*0:0*/ __Vtask_tb_ball_logic__DOT__holdDown__11__direction;
    __Vtask_tb_ball_logic__DOT__holdDown__11__direction = 0;
    IData/*31:0*/ __Vtask_tb_ball_logic__DOT__holdDown__11__times;
    __Vtask_tb_ball_logic__DOT__holdDown__11__times = 0;
    IData/*31:0*/ __Vtask_tb_ball_logic__DOT__holdDown__11__unnamedblk1__DOT__i;
    __Vtask_tb_ball_logic__DOT__holdDown__11__unnamedblk1__DOT__i = 0;
    IData/*31:0*/ __Vtask_tb_ball_logic__DOT__holdDown__11__unnamedblk2__DOT__i;
    __Vtask_tb_ball_logic__DOT__holdDown__11__unnamedblk2__DOT__i = 0;
    CData/*0:0*/ __Vtask_tb_ball_logic__DOT__apply_movements__12__enable;
    __Vtask_tb_ball_logic__DOT__apply_movements__12__enable = 0;
    CData/*0:0*/ __Vtask_tb_ball_logic__DOT__apply_movements__12__rst;
    __Vtask_tb_ball_logic__DOT__apply_movements__12__rst = 0;
    CData/*0:0*/ __Vtask_tb_ball_logic__DOT__apply_movements__12__up;
    __Vtask_tb_ball_logic__DOT__apply_movements__12__up = 0;
    CData/*0:0*/ __Vtask_tb_ball_logic__DOT__apply_movements__12__down;
    __Vtask_tb_ball_logic__DOT__apply_movements__12__down = 0;
    CData/*0:0*/ __Vtask_tb_ball_logic__DOT__apply_movements__13__enable;
    __Vtask_tb_ball_logic__DOT__apply_movements__13__enable = 0;
    CData/*0:0*/ __Vtask_tb_ball_logic__DOT__apply_movements__13__rst;
    __Vtask_tb_ball_logic__DOT__apply_movements__13__rst = 0;
    CData/*0:0*/ __Vtask_tb_ball_logic__DOT__apply_movements__13__up;
    __Vtask_tb_ball_logic__DOT__apply_movements__13__up = 0;
    CData/*0:0*/ __Vtask_tb_ball_logic__DOT__apply_movements__13__down;
    __Vtask_tb_ball_logic__DOT__apply_movements__13__down = 0;
    CData/*7:0*/ __Vtask_tb_ball_logic__DOT__checkMatch__14__expected_pos;
    __Vtask_tb_ball_logic__DOT__checkMatch__14__expected_pos = 0;
    VlWide<3>/*95:0*/ __Vtemp_1;
    // Body
    __Vtemp_1[0U] = 0x2e667374U;
    __Vtemp_1[1U] = 0x666f726dU;
    __Vtemp_1[2U] = 0x77617665U;
    vlSymsp->_vm_contextp__->dumpfile(VL_CVT_PACK_STR_NW(3, __Vtemp_1));
    vlSymsp->_traceDumpOpen();
    vlSelfRef.tb_ball_logic__DOT__CLK = 0U;
    vlSelfRef.tb_ball_logic__DOT__frame = 0U;
    vlSelfRef.tb_ball_logic__DOT__movement_up = 0U;
    vlSelfRef.tb_ball_logic__DOT__movement_down = 0U;
    vlSelfRef.tb_ball_logic__DOT__test_number = 0U;
    vlSelfRef.tb_ball_logic__DOT__num_passed = 0U;
    vlSelfRef.tb_ball_logic__DOT__nRST = 0U;
    co_await vlSelfRef.__VtrigSched_h80d955bd__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_ball_logic.CLK)", 
                                                         "tb/tb_paddle_logic.sv", 
                                                         29);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_h80d955bd__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_ball_logic.CLK)", 
                                                         "tb/tb_paddle_logic.sv", 
                                                         29);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_h80d955bd__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_ball_logic.CLK)", 
                                                         "tb/tb_paddle_logic.sv", 
                                                         31);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_ball_logic__DOT__nRST = 1U;
    co_await vlSelfRef.__VtrigSched_h80d955bd__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_ball_logic.CLK)", 
                                                         "tb/tb_paddle_logic.sv", 
                                                         33);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VdlySched.delay(1ULL, nullptr, 
                                         "tb/tb_paddle_logic.sv", 
                                         34);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    __Vtask_tb_ball_logic__DOT__apply_movements__1__down = 0U;
    __Vtask_tb_ball_logic__DOT__apply_movements__1__up = 0U;
    __Vtask_tb_ball_logic__DOT__apply_movements__1__rst = 1U;
    __Vtask_tb_ball_logic__DOT__apply_movements__1__enable = 1U;
    vlSelfRef.tb_ball_logic__DOT__movement_up = __Vtask_tb_ball_logic__DOT__apply_movements__1__up;
    vlSelfRef.tb_ball_logic__DOT__movement_down = __Vtask_tb_ball_logic__DOT__apply_movements__1__down;
    vlSelfRef.tb_ball_logic__DOT__nRST = __Vtask_tb_ball_logic__DOT__apply_movements__1__rst;
    vlSelfRef.tb_ball_logic__DOT__frame = __Vtask_tb_ball_logic__DOT__apply_movements__1__enable;
    co_await vlSelfRef.__VtrigSched_h80d955bd__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_ball_logic.CLK)", 
                                                         "tb/tb_paddle_logic.sv", 
                                                         49);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VdlySched.delay(1ULL, nullptr, 
                                         "tb/tb_paddle_logic.sv", 
                                         50);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    __Vtask_tb_ball_logic__DOT__checkMatch__2__expected_pos = 0x32U;
    vlSelfRef.tb_ball_logic__DOT__test_number = ((IData)(1U) 
                                                 + vlSelfRef.tb_ball_logic__DOT__test_number);
    if (VL_UNLIKELY(((IData)(__Vtask_tb_ball_logic__DOT__checkMatch__2__expected_pos) 
                     != (IData)(vlSelfRef.tb_ball_logic__DOT__next_pos)))) {
        VL_WRITEF_NX("[Time %0t]: Expected %8#, got %8#\n\n",0,
                     64,VL_TIME_UNITED_Q(1),-12,8,(IData)(__Vtask_tb_ball_logic__DOT__checkMatch__2__expected_pos),
                     8,vlSelfRef.tb_ball_logic__DOT__next_pos);
    } else {
        vlSelfRef.tb_ball_logic__DOT__num_passed = 
            ((IData)(1U) + vlSelfRef.tb_ball_logic__DOT__num_passed);
    }
    __Vtask_tb_ball_logic__DOT__holdDown__3__times = 2U;
    __Vtask_tb_ball_logic__DOT__holdDown__3__direction = 1U;
    if (__Vtask_tb_ball_logic__DOT__holdDown__3__direction) {
        __Vtask_tb_ball_logic__DOT__holdDown__3__unnamedblk1__DOT__i = 0U;
        while (VL_LTS_III(32, __Vtask_tb_ball_logic__DOT__holdDown__3__unnamedblk1__DOT__i, __Vtask_tb_ball_logic__DOT__holdDown__3__times)) {
            __Vtask_tb_ball_logic__DOT__apply_movements__4__down = 0U;
            __Vtask_tb_ball_logic__DOT__apply_movements__4__up = 1U;
            __Vtask_tb_ball_logic__DOT__apply_movements__4__rst = 1U;
            __Vtask_tb_ball_logic__DOT__apply_movements__4__enable = 1U;
            vlSelfRef.tb_ball_logic__DOT__movement_up 
                = __Vtask_tb_ball_logic__DOT__apply_movements__4__up;
            vlSelfRef.tb_ball_logic__DOT__movement_down 
                = __Vtask_tb_ball_logic__DOT__apply_movements__4__down;
            vlSelfRef.tb_ball_logic__DOT__nRST = __Vtask_tb_ball_logic__DOT__apply_movements__4__rst;
            vlSelfRef.tb_ball_logic__DOT__frame = __Vtask_tb_ball_logic__DOT__apply_movements__4__enable;
            co_await vlSelfRef.__VtrigSched_h80d955bd__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_ball_logic.CLK)", 
                                                                 "tb/tb_paddle_logic.sv", 
                                                                 49);
            vlSelfRef.__Vm_traceActivity[2U] = 1U;
            co_await vlSelfRef.__VdlySched.delay(1ULL, 
                                                 nullptr, 
                                                 "tb/tb_paddle_logic.sv", 
                                                 50);
            vlSelfRef.__Vm_traceActivity[2U] = 1U;
            __Vtask_tb_ball_logic__DOT__holdDown__3__unnamedblk1__DOT__i 
                = ((IData)(1U) + __Vtask_tb_ball_logic__DOT__holdDown__3__unnamedblk1__DOT__i);
        }
    } else {
        __Vtask_tb_ball_logic__DOT__holdDown__3__unnamedblk2__DOT__i = 0U;
        while (VL_LTS_III(32, __Vtask_tb_ball_logic__DOT__holdDown__3__unnamedblk2__DOT__i, __Vtask_tb_ball_logic__DOT__holdDown__3__times)) {
            __Vtask_tb_ball_logic__DOT__apply_movements__5__down = 1U;
            __Vtask_tb_ball_logic__DOT__apply_movements__5__up = 0U;
            __Vtask_tb_ball_logic__DOT__apply_movements__5__rst = 1U;
            __Vtask_tb_ball_logic__DOT__apply_movements__5__enable = 1U;
            vlSelfRef.tb_ball_logic__DOT__movement_up 
                = __Vtask_tb_ball_logic__DOT__apply_movements__5__up;
            vlSelfRef.tb_ball_logic__DOT__movement_down 
                = __Vtask_tb_ball_logic__DOT__apply_movements__5__down;
            vlSelfRef.tb_ball_logic__DOT__nRST = __Vtask_tb_ball_logic__DOT__apply_movements__5__rst;
            vlSelfRef.tb_ball_logic__DOT__frame = __Vtask_tb_ball_logic__DOT__apply_movements__5__enable;
            co_await vlSelfRef.__VtrigSched_h80d955bd__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_ball_logic.CLK)", 
                                                                 "tb/tb_paddle_logic.sv", 
                                                                 49);
            vlSelfRef.__Vm_traceActivity[2U] = 1U;
            co_await vlSelfRef.__VdlySched.delay(1ULL, 
                                                 nullptr, 
                                                 "tb/tb_paddle_logic.sv", 
                                                 50);
            vlSelfRef.__Vm_traceActivity[2U] = 1U;
            __Vtask_tb_ball_logic__DOT__holdDown__3__unnamedblk2__DOT__i 
                = ((IData)(1U) + __Vtask_tb_ball_logic__DOT__holdDown__3__unnamedblk2__DOT__i);
        }
    }
    __Vtask_tb_ball_logic__DOT__checkMatch__6__expected_pos = 0x38U;
    vlSelfRef.tb_ball_logic__DOT__test_number = ((IData)(1U) 
                                                 + vlSelfRef.tb_ball_logic__DOT__test_number);
    if (VL_UNLIKELY(((IData)(__Vtask_tb_ball_logic__DOT__checkMatch__6__expected_pos) 
                     != (IData)(vlSelfRef.tb_ball_logic__DOT__next_pos)))) {
        VL_WRITEF_NX("[Time %0t]: Expected %8#, got %8#\n\n",0,
                     64,VL_TIME_UNITED_Q(1),-12,8,(IData)(__Vtask_tb_ball_logic__DOT__checkMatch__6__expected_pos),
                     8,vlSelfRef.tb_ball_logic__DOT__next_pos);
    } else {
        vlSelfRef.tb_ball_logic__DOT__num_passed = 
            ((IData)(1U) + vlSelfRef.tb_ball_logic__DOT__num_passed);
    }
    __Vtask_tb_ball_logic__DOT__holdDown__7__times = 0x1eU;
    __Vtask_tb_ball_logic__DOT__holdDown__7__direction = 1U;
    if (__Vtask_tb_ball_logic__DOT__holdDown__7__direction) {
        __Vtask_tb_ball_logic__DOT__holdDown__7__unnamedblk1__DOT__i = 0U;
        while (VL_LTS_III(32, __Vtask_tb_ball_logic__DOT__holdDown__7__unnamedblk1__DOT__i, __Vtask_tb_ball_logic__DOT__holdDown__7__times)) {
            __Vtask_tb_ball_logic__DOT__apply_movements__8__down = 0U;
            __Vtask_tb_ball_logic__DOT__apply_movements__8__up = 1U;
            __Vtask_tb_ball_logic__DOT__apply_movements__8__rst = 1U;
            __Vtask_tb_ball_logic__DOT__apply_movements__8__enable = 1U;
            vlSelfRef.tb_ball_logic__DOT__movement_up 
                = __Vtask_tb_ball_logic__DOT__apply_movements__8__up;
            vlSelfRef.tb_ball_logic__DOT__movement_down 
                = __Vtask_tb_ball_logic__DOT__apply_movements__8__down;
            vlSelfRef.tb_ball_logic__DOT__nRST = __Vtask_tb_ball_logic__DOT__apply_movements__8__rst;
            vlSelfRef.tb_ball_logic__DOT__frame = __Vtask_tb_ball_logic__DOT__apply_movements__8__enable;
            co_await vlSelfRef.__VtrigSched_h80d955bd__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_ball_logic.CLK)", 
                                                                 "tb/tb_paddle_logic.sv", 
                                                                 49);
            vlSelfRef.__Vm_traceActivity[2U] = 1U;
            co_await vlSelfRef.__VdlySched.delay(1ULL, 
                                                 nullptr, 
                                                 "tb/tb_paddle_logic.sv", 
                                                 50);
            vlSelfRef.__Vm_traceActivity[2U] = 1U;
            __Vtask_tb_ball_logic__DOT__holdDown__7__unnamedblk1__DOT__i 
                = ((IData)(1U) + __Vtask_tb_ball_logic__DOT__holdDown__7__unnamedblk1__DOT__i);
        }
    } else {
        __Vtask_tb_ball_logic__DOT__holdDown__7__unnamedblk2__DOT__i = 0U;
        while (VL_LTS_III(32, __Vtask_tb_ball_logic__DOT__holdDown__7__unnamedblk2__DOT__i, __Vtask_tb_ball_logic__DOT__holdDown__7__times)) {
            __Vtask_tb_ball_logic__DOT__apply_movements__9__down = 1U;
            __Vtask_tb_ball_logic__DOT__apply_movements__9__up = 0U;
            __Vtask_tb_ball_logic__DOT__apply_movements__9__rst = 1U;
            __Vtask_tb_ball_logic__DOT__apply_movements__9__enable = 1U;
            vlSelfRef.tb_ball_logic__DOT__movement_up 
                = __Vtask_tb_ball_logic__DOT__apply_movements__9__up;
            vlSelfRef.tb_ball_logic__DOT__movement_down 
                = __Vtask_tb_ball_logic__DOT__apply_movements__9__down;
            vlSelfRef.tb_ball_logic__DOT__nRST = __Vtask_tb_ball_logic__DOT__apply_movements__9__rst;
            vlSelfRef.tb_ball_logic__DOT__frame = __Vtask_tb_ball_logic__DOT__apply_movements__9__enable;
            co_await vlSelfRef.__VtrigSched_h80d955bd__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_ball_logic.CLK)", 
                                                                 "tb/tb_paddle_logic.sv", 
                                                                 49);
            vlSelfRef.__Vm_traceActivity[2U] = 1U;
            co_await vlSelfRef.__VdlySched.delay(1ULL, 
                                                 nullptr, 
                                                 "tb/tb_paddle_logic.sv", 
                                                 50);
            vlSelfRef.__Vm_traceActivity[2U] = 1U;
            __Vtask_tb_ball_logic__DOT__holdDown__7__unnamedblk2__DOT__i 
                = ((IData)(1U) + __Vtask_tb_ball_logic__DOT__holdDown__7__unnamedblk2__DOT__i);
        }
    }
    __Vtask_tb_ball_logic__DOT__checkMatch__10__expected_pos = 0x64U;
    vlSelfRef.tb_ball_logic__DOT__test_number = ((IData)(1U) 
                                                 + vlSelfRef.tb_ball_logic__DOT__test_number);
    if (VL_UNLIKELY(((IData)(__Vtask_tb_ball_logic__DOT__checkMatch__10__expected_pos) 
                     != (IData)(vlSelfRef.tb_ball_logic__DOT__next_pos)))) {
        VL_WRITEF_NX("[Time %0t]: Expected %8#, got %8#\n\n",0,
                     64,VL_TIME_UNITED_Q(1),-12,8,(IData)(__Vtask_tb_ball_logic__DOT__checkMatch__10__expected_pos),
                     8,vlSelfRef.tb_ball_logic__DOT__next_pos);
    } else {
        vlSelfRef.tb_ball_logic__DOT__num_passed = 
            ((IData)(1U) + vlSelfRef.tb_ball_logic__DOT__num_passed);
    }
    __Vtask_tb_ball_logic__DOT__holdDown__11__times = 0x3cU;
    __Vtask_tb_ball_logic__DOT__holdDown__11__direction = 0U;
    if (__Vtask_tb_ball_logic__DOT__holdDown__11__direction) {
        __Vtask_tb_ball_logic__DOT__holdDown__11__unnamedblk1__DOT__i = 0U;
        while (VL_LTS_III(32, __Vtask_tb_ball_logic__DOT__holdDown__11__unnamedblk1__DOT__i, __Vtask_tb_ball_logic__DOT__holdDown__11__times)) {
            __Vtask_tb_ball_logic__DOT__apply_movements__12__down = 0U;
            __Vtask_tb_ball_logic__DOT__apply_movements__12__up = 1U;
            __Vtask_tb_ball_logic__DOT__apply_movements__12__rst = 1U;
            __Vtask_tb_ball_logic__DOT__apply_movements__12__enable = 1U;
            vlSelfRef.tb_ball_logic__DOT__movement_up 
                = __Vtask_tb_ball_logic__DOT__apply_movements__12__up;
            vlSelfRef.tb_ball_logic__DOT__movement_down 
                = __Vtask_tb_ball_logic__DOT__apply_movements__12__down;
            vlSelfRef.tb_ball_logic__DOT__nRST = __Vtask_tb_ball_logic__DOT__apply_movements__12__rst;
            vlSelfRef.tb_ball_logic__DOT__frame = __Vtask_tb_ball_logic__DOT__apply_movements__12__enable;
            co_await vlSelfRef.__VtrigSched_h80d955bd__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_ball_logic.CLK)", 
                                                                 "tb/tb_paddle_logic.sv", 
                                                                 49);
            vlSelfRef.__Vm_traceActivity[2U] = 1U;
            co_await vlSelfRef.__VdlySched.delay(1ULL, 
                                                 nullptr, 
                                                 "tb/tb_paddle_logic.sv", 
                                                 50);
            vlSelfRef.__Vm_traceActivity[2U] = 1U;
            __Vtask_tb_ball_logic__DOT__holdDown__11__unnamedblk1__DOT__i 
                = ((IData)(1U) + __Vtask_tb_ball_logic__DOT__holdDown__11__unnamedblk1__DOT__i);
        }
    } else {
        __Vtask_tb_ball_logic__DOT__holdDown__11__unnamedblk2__DOT__i = 0U;
        while (VL_LTS_III(32, __Vtask_tb_ball_logic__DOT__holdDown__11__unnamedblk2__DOT__i, __Vtask_tb_ball_logic__DOT__holdDown__11__times)) {
            __Vtask_tb_ball_logic__DOT__apply_movements__13__down = 1U;
            __Vtask_tb_ball_logic__DOT__apply_movements__13__up = 0U;
            __Vtask_tb_ball_logic__DOT__apply_movements__13__rst = 1U;
            __Vtask_tb_ball_logic__DOT__apply_movements__13__enable = 1U;
            vlSelfRef.tb_ball_logic__DOT__movement_up 
                = __Vtask_tb_ball_logic__DOT__apply_movements__13__up;
            vlSelfRef.tb_ball_logic__DOT__movement_down 
                = __Vtask_tb_ball_logic__DOT__apply_movements__13__down;
            vlSelfRef.tb_ball_logic__DOT__nRST = __Vtask_tb_ball_logic__DOT__apply_movements__13__rst;
            vlSelfRef.tb_ball_logic__DOT__frame = __Vtask_tb_ball_logic__DOT__apply_movements__13__enable;
            co_await vlSelfRef.__VtrigSched_h80d955bd__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_ball_logic.CLK)", 
                                                                 "tb/tb_paddle_logic.sv", 
                                                                 49);
            vlSelfRef.__Vm_traceActivity[2U] = 1U;
            co_await vlSelfRef.__VdlySched.delay(1ULL, 
                                                 nullptr, 
                                                 "tb/tb_paddle_logic.sv", 
                                                 50);
            vlSelfRef.__Vm_traceActivity[2U] = 1U;
            __Vtask_tb_ball_logic__DOT__holdDown__11__unnamedblk2__DOT__i 
                = ((IData)(1U) + __Vtask_tb_ball_logic__DOT__holdDown__11__unnamedblk2__DOT__i);
        }
    }
    __Vtask_tb_ball_logic__DOT__checkMatch__14__expected_pos = 3U;
    vlSelfRef.tb_ball_logic__DOT__test_number = ((IData)(1U) 
                                                 + vlSelfRef.tb_ball_logic__DOT__test_number);
    if (VL_UNLIKELY(((IData)(__Vtask_tb_ball_logic__DOT__checkMatch__14__expected_pos) 
                     != (IData)(vlSelfRef.tb_ball_logic__DOT__next_pos)))) {
        VL_WRITEF_NX("[Time %0t]: Expected %8#, got %8#\n\n",0,
                     64,VL_TIME_UNITED_Q(1),-12,8,(IData)(__Vtask_tb_ball_logic__DOT__checkMatch__14__expected_pos),
                     8,vlSelfRef.tb_ball_logic__DOT__next_pos);
    } else {
        vlSelfRef.tb_ball_logic__DOT__num_passed = 
            ((IData)(1U) + vlSelfRef.tb_ball_logic__DOT__num_passed);
    }
    VL_WRITEF_NX("Passed %0d/%0d tests.\n",0,32,vlSelfRef.tb_ball_logic__DOT__num_passed,
                 32,vlSelfRef.tb_ball_logic__DOT__test_number);
    VL_FINISH_MT("tb/tb_paddle_logic.sv", 118, "");
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vpaddle_logic___024root___dump_triggers__act(Vpaddle_logic___024root* vlSelf);
#endif  // VL_DEBUG

void Vpaddle_logic___024root___eval_triggers__act(Vpaddle_logic___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vpaddle_logic__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpaddle_logic___024root___eval_triggers__act\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered.set(0U, ((IData)(vlSelfRef.tb_ball_logic__DOT__CLK) 
                                       & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_ball_logic__DOT__CLK__0))));
    vlSelfRef.__VactTriggered.set(1U, ((~ (IData)(vlSelfRef.tb_ball_logic__DOT__nRST)) 
                                       & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_ball_logic__DOT__nRST__0)));
    vlSelfRef.__VactTriggered.set(2U, vlSelfRef.__VdlySched.awaitingCurrentTime());
    vlSelfRef.__Vtrigprevexpr___TOP__tb_ball_logic__DOT__CLK__0 
        = vlSelfRef.tb_ball_logic__DOT__CLK;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_ball_logic__DOT__nRST__0 
        = vlSelfRef.tb_ball_logic__DOT__nRST;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vpaddle_logic___024root___dump_triggers__act(vlSelf);
    }
#endif
}
