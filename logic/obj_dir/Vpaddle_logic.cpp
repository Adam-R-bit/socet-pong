// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vpaddle_logic__pch.h"
#include "verilated_fst_c.h"

//============================================================
// Constructors

Vpaddle_logic::Vpaddle_logic(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vpaddle_logic__Syms(contextp(), _vcname__, this)}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
    contextp()->traceBaseModelCbAdd(
        [this](VerilatedTraceBaseC* tfp, int levels, int options) { traceBaseModel(tfp, levels, options); });
}

Vpaddle_logic::Vpaddle_logic(const char* _vcname__)
    : Vpaddle_logic(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vpaddle_logic::~Vpaddle_logic() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vpaddle_logic___024root___eval_debug_assertions(Vpaddle_logic___024root* vlSelf);
#endif  // VL_DEBUG
void Vpaddle_logic___024root___eval_static(Vpaddle_logic___024root* vlSelf);
void Vpaddle_logic___024root___eval_initial(Vpaddle_logic___024root* vlSelf);
void Vpaddle_logic___024root___eval_settle(Vpaddle_logic___024root* vlSelf);
void Vpaddle_logic___024root___eval(Vpaddle_logic___024root* vlSelf);

void Vpaddle_logic::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vpaddle_logic::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vpaddle_logic___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vpaddle_logic___024root___eval_static(&(vlSymsp->TOP));
        Vpaddle_logic___024root___eval_initial(&(vlSymsp->TOP));
        Vpaddle_logic___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vpaddle_logic___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

void Vpaddle_logic::eval_end_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+eval_end_step Vpaddle_logic::eval_end_step\n"); );
#ifdef VM_TRACE
    // Tracing
    if (VL_UNLIKELY(vlSymsp->__Vm_dumping)) vlSymsp->_traceDump();
#endif  // VM_TRACE
}

//============================================================
// Events and timing
bool Vpaddle_logic::eventsPending() { return !vlSymsp->TOP.__VdlySched.empty(); }

uint64_t Vpaddle_logic::nextTimeSlot() { return vlSymsp->TOP.__VdlySched.nextTimeSlot(); }

//============================================================
// Utilities

const char* Vpaddle_logic::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vpaddle_logic___024root___eval_final(Vpaddle_logic___024root* vlSelf);

VL_ATTR_COLD void Vpaddle_logic::final() {
    Vpaddle_logic___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vpaddle_logic::hierName() const { return vlSymsp->name(); }
const char* Vpaddle_logic::modelName() const { return "Vpaddle_logic"; }
unsigned Vpaddle_logic::threads() const { return 1; }
void Vpaddle_logic::prepareClone() const { contextp()->prepareClone(); }
void Vpaddle_logic::atClone() const {
    contextp()->threadPoolpOnClone();
}
std::unique_ptr<VerilatedTraceConfig> Vpaddle_logic::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void Vpaddle_logic___024root__trace_decl_types(VerilatedFst* tracep);

void Vpaddle_logic___024root__trace_init_top(Vpaddle_logic___024root* vlSelf, VerilatedFst* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedFst* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vpaddle_logic___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vpaddle_logic___024root*>(voidSelf);
    Vpaddle_logic__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->pushPrefix(std::string{vlSymsp->name()}, VerilatedTracePrefixType::SCOPE_MODULE);
    Vpaddle_logic___024root__trace_decl_types(tracep);
    Vpaddle_logic___024root__trace_init_top(vlSelf, tracep);
    tracep->popPrefix();
}

VL_ATTR_COLD void Vpaddle_logic___024root__trace_register(Vpaddle_logic___024root* vlSelf, VerilatedFst* tracep);

VL_ATTR_COLD void Vpaddle_logic::traceBaseModel(VerilatedTraceBaseC* tfp, int levels, int options) {
    (void)levels; (void)options;
    VerilatedFstC* const stfp = dynamic_cast<VerilatedFstC*>(tfp);
    if (VL_UNLIKELY(!stfp)) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'Vpaddle_logic::trace()' called on non-VerilatedFstC object;"
            " use --trace-fst with VerilatedFst object, and --trace with VerilatedVcd object");
    }
    stfp->spTrace()->addModel(this);
    stfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    Vpaddle_logic___024root__trace_register(&(vlSymsp->TOP), stfp->spTrace());
}
