// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vpaddle_logic.h for the primary calling header

#ifndef VERILATED_VPADDLE_LOGIC___024ROOT_H_
#define VERILATED_VPADDLE_LOGIC___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vpaddle_logic__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vpaddle_logic___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ tb_ball_logic__DOT__nRST;
    CData/*0:0*/ tb_ball_logic__DOT__CLK;
    CData/*0:0*/ tb_ball_logic__DOT__frame;
    CData/*0:0*/ tb_ball_logic__DOT__movement_up;
    CData/*0:0*/ tb_ball_logic__DOT__movement_down;
    CData/*7:0*/ tb_ball_logic__DOT__next_pos;
    CData/*7:0*/ tb_ball_logic__DOT__dut__DOT__pos;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __Vtrigprevexpr___TOP__tb_ball_logic__DOT__CLK__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__tb_ball_logic__DOT__nRST__0;
    CData/*0:0*/ __VactContinue;
    IData/*31:0*/ tb_ball_logic__DOT__test_number;
    IData/*31:0*/ tb_ball_logic__DOT__num_passed;
    IData/*31:0*/ tb_ball_logic__DOT__i;
    IData/*31:0*/ __VactIterCount;
    VlUnpacked<CData/*0:0*/, 3> __Vm_traceActivity;
    VlDelayScheduler __VdlySched;
    VlTriggerScheduler __VtrigSched_h80d955bd__0;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<3> __VactTriggered;
    VlTriggerVec<3> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vpaddle_logic__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vpaddle_logic___024root(Vpaddle_logic__Syms* symsp, const char* v__name);
    ~Vpaddle_logic___024root();
    VL_UNCOPYABLE(Vpaddle_logic___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
