// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vpaddle_logic.h for the primary calling header

#include "Vpaddle_logic__pch.h"
#include "Vpaddle_logic__Syms.h"
#include "Vpaddle_logic___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vpaddle_logic___024root___dump_triggers__stl(Vpaddle_logic___024root* vlSelf);
#endif  // VL_DEBUG

VL_ATTR_COLD void Vpaddle_logic___024root___eval_triggers__stl(Vpaddle_logic___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vpaddle_logic__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpaddle_logic___024root___eval_triggers__stl\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VstlTriggered.set(0U, (IData)(vlSelfRef.__VstlFirstIteration));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vpaddle_logic___024root___dump_triggers__stl(vlSelf);
    }
#endif
}
