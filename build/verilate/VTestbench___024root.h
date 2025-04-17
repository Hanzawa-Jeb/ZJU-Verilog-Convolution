// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VTestbench.h for the primary calling header

#ifndef VERILATED_VTESTBENCH___024ROOT_H_
#define VERILATED_VTESTBENCH___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
#include "VTestbench_Conv.h"
#include "VTestbench___024root.h"


class VTestbench__Syms;
struct VTestbench_Testbench__DOT__conv_unit__DOT__conv__DOT__mid_vector__struct__0 {
    VlWide<4>/*127:0*/ __PVT__data;
    CData/*0:0*/ __PVT__valid;

    bool operator==(const VTestbench_Testbench__DOT__conv_unit__DOT__conv__DOT__mid_vector__struct__0& rhs) const {
        return __PVT__data == rhs.__PVT__data
            && __PVT__valid == rhs.__PVT__valid;
    }
    bool operator!=(const VTestbench_Testbench__DOT__conv_unit__DOT__conv__DOT__mid_vector__struct__0& rhs) const {
        return !(*this == rhs);
    }

    bool operator<(const VTestbench_Testbench__DOT__conv_unit__DOT__conv__DOT__mid_vector__struct__0& rhs) const {
        return std::tie(__PVT__data, __PVT__valid)
            <  std::tie(rhs.__PVT__data, rhs.__PVT__valid);
    }
};
template <>
struct VlIsCustomStruct<VTestbench_Testbench__DOT__conv_unit__DOT__conv__DOT__mid_vector__struct__0> : public std::true_type {};

class alignas(VL_CACHE_LINE_BYTES) VTestbench___024root final : public VerilatedModule {
  public:
    // CELLS
    VTestbench_Conv* __PVT__Conv;

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ Testbench__DOT__clk;
    CData/*0:0*/ Testbench__DOT__rst;
    CData/*0:0*/ Testbench__DOT__out_valid;
    CData/*0:0*/ Testbench__DOT__in_valid;
    CData/*0:0*/ Testbench__DOT__in_ready;
    CData/*0:0*/ Testbench__DOT__error;
    CData/*0:0*/ Testbench__DOT__conv_unit__DOT__temp_valid;
    CData/*0:0*/ Testbench__DOT__conv_unit__DOT__temp_ready;
    CData/*0:0*/ Testbench__DOT__conv_unit__DOT__shift__DOT__state_reg;
    CData/*0:0*/ Testbench__DOT__conv_unit__DOT__conv__DOT__mul_start;
    CData/*1:0*/ Testbench__DOT__conv_unit__DOT__conv__DOT__state_reg;
    CData/*1:0*/ Testbench__DOT__conv_unit__DOT__conv__DOT__mul_gen__BRA__0__KET____DOT__mul__DOT__fsm_state_reg;
    CData/*5:0*/ Testbench__DOT__conv_unit__DOT__conv__DOT__mul_gen__BRA__0__KET____DOT__mul__DOT__work_cnt;
    CData/*0:0*/ Testbench__DOT__conv_unit__DOT__conv__DOT__mul_gen__BRA__0__KET____DOT__mul__DOT__finish_reg;
    CData/*1:0*/ Testbench__DOT__conv_unit__DOT__conv__DOT__mul_gen__BRA__1__KET____DOT__mul__DOT__fsm_state_reg;
    CData/*5:0*/ Testbench__DOT__conv_unit__DOT__conv__DOT__mul_gen__BRA__1__KET____DOT__mul__DOT__work_cnt;
    CData/*0:0*/ Testbench__DOT__conv_unit__DOT__conv__DOT__mul_gen__BRA__1__KET____DOT__mul__DOT__finish_reg;
    CData/*1:0*/ Testbench__DOT__conv_unit__DOT__conv__DOT__mul_gen__BRA__2__KET____DOT__mul__DOT__fsm_state_reg;
    CData/*5:0*/ Testbench__DOT__conv_unit__DOT__conv__DOT__mul_gen__BRA__2__KET____DOT__mul__DOT__work_cnt;
    CData/*0:0*/ Testbench__DOT__conv_unit__DOT__conv__DOT__mul_gen__BRA__2__KET____DOT__mul__DOT__finish_reg;
    CData/*1:0*/ Testbench__DOT__conv_unit__DOT__conv__DOT__mul_gen__BRA__3__KET____DOT__mul__DOT__fsm_state_reg;
    CData/*5:0*/ Testbench__DOT__conv_unit__DOT__conv__DOT__mul_gen__BRA__3__KET____DOT__mul__DOT__work_cnt;
    CData/*0:0*/ Testbench__DOT__conv_unit__DOT__conv__DOT__mul_gen__BRA__3__KET____DOT__mul__DOT__finish_reg;
    CData/*0:0*/ Testbench__DOT__judge__DOT__request;
    CData/*5:0*/ __Vdly__Testbench__DOT__conv_unit__DOT__conv__DOT__mul_gen__BRA__0__KET____DOT__mul__DOT__work_cnt;
    CData/*5:0*/ __Vdly__Testbench__DOT__conv_unit__DOT__conv__DOT__mul_gen__BRA__1__KET____DOT__mul__DOT__work_cnt;
    CData/*5:0*/ __Vdly__Testbench__DOT__conv_unit__DOT__conv__DOT__mul_gen__BRA__2__KET____DOT__mul__DOT__work_cnt;
    CData/*5:0*/ __Vdly__Testbench__DOT__conv_unit__DOT__conv__DOT__mul_gen__BRA__3__KET____DOT__mul__DOT__work_cnt;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __Vtrigprevexpr___TOP__Testbench__DOT__clk__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__Testbench__DOT__rst__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__Testbench__DOT__out_valid__0;
    CData/*0:0*/ __VactContinue;
    IData/*31:0*/ Testbench__DOT__i;
    IData/*31:0*/ Testbench__DOT__j;
    IData/*31:0*/ Testbench__DOT__seed;
    IData/*31:0*/ Testbench__DOT__conv_unit__DOT__shift__DOT__i;
    IData/*31:0*/ Testbench__DOT__conv_unit__DOT__conv__DOT__unnamedblk1__DOT__j;
    IData/*31:0*/ Testbench__DOT__conv_unit__DOT__conv__DOT__unnamedblk2__DOT__m;
    VlWide<4>/*127:0*/ Testbench__DOT__conv_unit__DOT__conv__DOT__mul_gen__BRA__0__KET____DOT__mul__DOT__product_reg;
    VlWide<3>/*64:0*/ Testbench__DOT__conv_unit__DOT__conv__DOT__mul_gen__BRA__0__KET____DOT__mul__DOT__add_result;
    VlWide<4>/*127:0*/ Testbench__DOT__conv_unit__DOT__conv__DOT__mul_gen__BRA__1__KET____DOT__mul__DOT__product_reg;
    VlWide<3>/*64:0*/ Testbench__DOT__conv_unit__DOT__conv__DOT__mul_gen__BRA__1__KET____DOT__mul__DOT__add_result;
    VlWide<4>/*127:0*/ Testbench__DOT__conv_unit__DOT__conv__DOT__mul_gen__BRA__2__KET____DOT__mul__DOT__product_reg;
    VlWide<3>/*64:0*/ Testbench__DOT__conv_unit__DOT__conv__DOT__mul_gen__BRA__2__KET____DOT__mul__DOT__add_result;
    VlWide<4>/*127:0*/ Testbench__DOT__conv_unit__DOT__conv__DOT__mul_gen__BRA__3__KET____DOT__mul__DOT__product_reg;
    VlWide<3>/*64:0*/ Testbench__DOT__conv_unit__DOT__conv__DOT__mul_gen__BRA__3__KET____DOT__mul__DOT__add_result;
    VlWide<4>/*127:0*/ Testbench__DOT__judge__DOT__sum;
    VlWide<4>/*127:0*/ Testbench__DOT__judge__DOT__simulate_result;
    IData/*31:0*/ Testbench__DOT__judge__DOT__i;
    IData/*31:0*/ __VactIterCount;
    QData/*63:0*/ Testbench__DOT__in_data;
    QData/*63:0*/ Testbench__DOT__conv_unit__DOT__conv__DOT__mul_gen__BRA__0__KET____DOT__mul__DOT__multiplicand_reg;
    QData/*63:0*/ Testbench__DOT__conv_unit__DOT__conv__DOT__mul_gen__BRA__1__KET____DOT__mul__DOT__multiplicand_reg;
    QData/*63:0*/ Testbench__DOT__conv_unit__DOT__conv__DOT__mul_gen__BRA__2__KET____DOT__mul__DOT__multiplicand_reg;
    QData/*63:0*/ Testbench__DOT__conv_unit__DOT__conv__DOT__mul_gen__BRA__3__KET____DOT__mul__DOT__multiplicand_reg;
    VlUnpacked<VlWide<4>/*127:0*/, 5> Testbench__DOT__conv_unit__DOT__conv__DOT__temp_result;
    VlUnpacked<CData/*0:0*/, 5> Testbench__DOT__conv_unit__DOT__conv__DOT__temp_finish;
    VlUnpacked<VlWide<4>/*127:0*/, 4> Testbench__DOT__judge__DOT__mid;
    VlUnpacked<CData/*0:0*/, 6> __Vm_traceActivity;
    VTestbench_data_vector__struct__0 Testbench__DOT__kernel;
    VTestbench_data_vector__struct__0 Testbench__DOT__conv_unit__DOT__shifted_data;
    VTestbench_Testbench__DOT__conv_unit__DOT__conv__DOT__mid_vector__struct__0 Testbench__DOT__conv_unit__DOT__conv__DOT__vector_stage2;
    VTestbench_data_vector__struct__0 Testbench__DOT__conv_unit__DOT__conv__DOT__temp_ker;
    VTestbench_data_vector__struct__0 Testbench__DOT__conv_unit__DOT__conv__DOT__temp_dat;
    VlQueue<VlWide<4>/*127:0*/> Testbench__DOT__judge__DOT__resultQueue;
    VlQueue<QData/*63:0*/> Testbench__DOT__judge__DOT__dataQueue;
    VlDelayScheduler __VdlySched;
    VlTriggerScheduler __VtrigSched_hcbe6592c__0;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<5> __VactTriggered;
    VlTriggerVec<5> __VnbaTriggered;
    VlUnpacked<VTestbench_Testbench__DOT__conv_unit__DOT__conv__DOT__mid_vector__struct__0, 4> Testbench__DOT__conv_unit__DOT__conv__DOT__vector_stage1;

    // INTERNAL VARIABLES
    VTestbench__Syms* const vlSymsp;

    // CONSTRUCTORS
    VTestbench___024root(VTestbench__Syms* symsp, const char* v__name);
    ~VTestbench___024root();
    VL_UNCOPYABLE(VTestbench___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};

std::string VL_TO_STRING(const VTestbench_Testbench__DOT__conv_unit__DOT__conv__DOT__mid_vector__struct__0& obj);

#endif  // guard
