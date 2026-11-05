// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vpaddle_logic.h for the primary calling header

#include "Vpaddle_logic__pch.h"
#include "Vpaddle_logic__Syms.h"
#include "Vpaddle_logic___024root.h"

void Vpaddle_logic___024root___ctor_var_reset(Vpaddle_logic___024root* vlSelf);

Vpaddle_logic___024root::Vpaddle_logic___024root(Vpaddle_logic__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , __VdlySched{*symsp->_vm_contextp__}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vpaddle_logic___024root___ctor_var_reset(this);
}

void Vpaddle_logic___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vpaddle_logic___024root::~Vpaddle_logic___024root() {
}
