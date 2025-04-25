// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTestbench.h for the primary calling header

#include "VTestbench__pch.h"
#include "VTestbench___024root.h"

VL_ATTR_COLD void VTestbench___024root___eval_static__TOP(VTestbench___024root* vlSelf);
VL_ATTR_COLD void VTestbench___024root____Vm_traceActivitySetAll(VTestbench___024root* vlSelf);

VL_ATTR_COLD void VTestbench___024root___eval_static(VTestbench___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestbench___024root___eval_static\n"); );
    VTestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VTestbench___024root___eval_static__TOP(vlSelf);
    VTestbench___024root____Vm_traceActivitySetAll(vlSelf);
}

VL_ATTR_COLD void VTestbench___024root___eval_static__TOP(VTestbench___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestbench___024root___eval_static__TOP\n"); );
    VTestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.Testbench__DOT__seed = 0U;
    vlSelfRef.Testbench__DOT__conv_unit__DOT__conv__DOT__mul_start = 0U;
    vlSelfRef.Testbench__DOT__conv_unit__DOT__conv__DOT__state_reg = 0U;
    vlSelfRef.Testbench__DOT__conv_unit__DOT__conv__DOT__mul_gen__BRA__0__KET____DOT__mul__DOT__finish_reg = 0U;
    vlSelfRef.Testbench__DOT__conv_unit__DOT__conv__DOT__mul_gen__BRA__1__KET____DOT__mul__DOT__finish_reg = 0U;
    vlSelfRef.Testbench__DOT__conv_unit__DOT__conv__DOT__mul_gen__BRA__2__KET____DOT__mul__DOT__finish_reg = 0U;
    vlSelfRef.Testbench__DOT__conv_unit__DOT__conv__DOT__mul_gen__BRA__3__KET____DOT__mul__DOT__finish_reg = 0U;
    vlSelfRef.Testbench__DOT__judge__DOT__dataQueue 
        = VlQueue<QData/*63:0*/>::consVC(0ULL, VlQueue<QData/*63:0*/>::consVC(0ULL, 
                                                                              VlQueue<QData/*63:0*/>::consVV(0ULL, 
                                                                                0ULL)));
}

VL_ATTR_COLD void VTestbench___024root___eval_final(VTestbench___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestbench___024root___eval_final\n"); );
    VTestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VTestbench___024root___dump_triggers__stl(VTestbench___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool VTestbench___024root___eval_phase__stl(VTestbench___024root* vlSelf);

VL_ATTR_COLD void VTestbench___024root___eval_settle(VTestbench___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestbench___024root___eval_settle\n"); );
    VTestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VstlIterCount;
    CData/*0:0*/ __VstlContinue;
    // Body
    __VstlIterCount = 0U;
    vlSelfRef.__VstlFirstIteration = 1U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        if (VL_UNLIKELY(((0x64U < __VstlIterCount)))) {
#ifdef VL_DEBUG
            VTestbench___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("/mnt/d/sysI/sys1-sp25/src/lab4-1/sim/testbench.sv", 2, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (VTestbench___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelfRef.__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VTestbench___024root___dump_triggers__stl(VTestbench___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestbench___024root___dump_triggers__stl\n"); );
    VTestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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

VL_ATTR_COLD void VTestbench___024root___stl_sequent__TOP__0(VTestbench___024root* vlSelf);

VL_ATTR_COLD void VTestbench___024root___eval_stl(VTestbench___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestbench___024root___eval_stl\n"); );
    VTestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        VTestbench___024root___stl_sequent__TOP__0(vlSelf);
        VTestbench___024root____Vm_traceActivitySetAll(vlSelf);
    }
}

VL_ATTR_COLD void VTestbench___024root___stl_sequent__TOP__0(VTestbench___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestbench___024root___stl_sequent__TOP__0\n"); );
    VTestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlWide<3>/*95:0*/ __Vtemp_2;
    VlWide<3>/*95:0*/ __Vtemp_3;
    VlWide<3>/*95:0*/ __Vtemp_4;
    VlWide<3>/*95:0*/ __Vtemp_6;
    VlWide<3>/*95:0*/ __Vtemp_7;
    VlWide<3>/*95:0*/ __Vtemp_8;
    VlWide<3>/*95:0*/ __Vtemp_10;
    VlWide<3>/*95:0*/ __Vtemp_11;
    VlWide<3>/*95:0*/ __Vtemp_12;
    VlWide<3>/*95:0*/ __Vtemp_14;
    VlWide<3>/*95:0*/ __Vtemp_15;
    VlWide<3>/*95:0*/ __Vtemp_16;
    // Body
    __Vtemp_2[0U] = (IData)((((QData)((IData)(vlSelfRef.Testbench__DOT__conv_unit__DOT__conv__DOT__mul_gen__BRA__0__KET____DOT__mul__DOT__product_reg[3U])) 
                              << 0x20U) | (QData)((IData)(
                                                          vlSelfRef.Testbench__DOT__conv_unit__DOT__conv__DOT__mul_gen__BRA__0__KET____DOT__mul__DOT__product_reg[2U]))));
    __Vtemp_2[1U] = (IData)(((((QData)((IData)(vlSelfRef.Testbench__DOT__conv_unit__DOT__conv__DOT__mul_gen__BRA__0__KET____DOT__mul__DOT__product_reg[3U])) 
                               << 0x20U) | (QData)((IData)(
                                                           vlSelfRef.Testbench__DOT__conv_unit__DOT__conv__DOT__mul_gen__BRA__0__KET____DOT__mul__DOT__product_reg[2U]))) 
                             >> 0x20U));
    __Vtemp_2[2U] = 0U;
    __Vtemp_3[0U] = (IData)(vlSelfRef.Testbench__DOT__conv_unit__DOT__conv__DOT__mul_gen__BRA__0__KET____DOT__mul__DOT__multiplicand_reg);
    __Vtemp_3[1U] = (IData)((vlSelfRef.Testbench__DOT__conv_unit__DOT__conv__DOT__mul_gen__BRA__0__KET____DOT__mul__DOT__multiplicand_reg 
                             >> 0x20U));
    __Vtemp_3[2U] = 0U;
    VL_ADD_W(3, __Vtemp_4, __Vtemp_2, __Vtemp_3);
    vlSelfRef.Testbench__DOT__conv_unit__DOT__conv__DOT__mul_gen__BRA__0__KET____DOT__mul__DOT__add_result[0U] 
        = __Vtemp_4[0U];
    vlSelfRef.Testbench__DOT__conv_unit__DOT__conv__DOT__mul_gen__BRA__0__KET____DOT__mul__DOT__add_result[1U] 
        = __Vtemp_4[1U];
    vlSelfRef.Testbench__DOT__conv_unit__DOT__conv__DOT__mul_gen__BRA__0__KET____DOT__mul__DOT__add_result[2U] 
        = (1U & __Vtemp_4[2U]);
    __Vtemp_6[0U] = (IData)((((QData)((IData)(vlSelfRef.Testbench__DOT__conv_unit__DOT__conv__DOT__mul_gen__BRA__1__KET____DOT__mul__DOT__product_reg[3U])) 
                              << 0x20U) | (QData)((IData)(
                                                          vlSelfRef.Testbench__DOT__conv_unit__DOT__conv__DOT__mul_gen__BRA__1__KET____DOT__mul__DOT__product_reg[2U]))));
    __Vtemp_6[1U] = (IData)(((((QData)((IData)(vlSelfRef.Testbench__DOT__conv_unit__DOT__conv__DOT__mul_gen__BRA__1__KET____DOT__mul__DOT__product_reg[3U])) 
                               << 0x20U) | (QData)((IData)(
                                                           vlSelfRef.Testbench__DOT__conv_unit__DOT__conv__DOT__mul_gen__BRA__1__KET____DOT__mul__DOT__product_reg[2U]))) 
                             >> 0x20U));
    __Vtemp_6[2U] = 0U;
    __Vtemp_7[0U] = (IData)(vlSelfRef.Testbench__DOT__conv_unit__DOT__conv__DOT__mul_gen__BRA__1__KET____DOT__mul__DOT__multiplicand_reg);
    __Vtemp_7[1U] = (IData)((vlSelfRef.Testbench__DOT__conv_unit__DOT__conv__DOT__mul_gen__BRA__1__KET____DOT__mul__DOT__multiplicand_reg 
                             >> 0x20U));
    __Vtemp_7[2U] = 0U;
    VL_ADD_W(3, __Vtemp_8, __Vtemp_6, __Vtemp_7);
    vlSelfRef.Testbench__DOT__conv_unit__DOT__conv__DOT__mul_gen__BRA__1__KET____DOT__mul__DOT__add_result[0U] 
        = __Vtemp_8[0U];
    vlSelfRef.Testbench__DOT__conv_unit__DOT__conv__DOT__mul_gen__BRA__1__KET____DOT__mul__DOT__add_result[1U] 
        = __Vtemp_8[1U];
    vlSelfRef.Testbench__DOT__conv_unit__DOT__conv__DOT__mul_gen__BRA__1__KET____DOT__mul__DOT__add_result[2U] 
        = (1U & __Vtemp_8[2U]);
    __Vtemp_10[0U] = (IData)((((QData)((IData)(vlSelfRef.Testbench__DOT__conv_unit__DOT__conv__DOT__mul_gen__BRA__2__KET____DOT__mul__DOT__product_reg[3U])) 
                               << 0x20U) | (QData)((IData)(
                                                           vlSelfRef.Testbench__DOT__conv_unit__DOT__conv__DOT__mul_gen__BRA__2__KET____DOT__mul__DOT__product_reg[2U]))));
    __Vtemp_10[1U] = (IData)(((((QData)((IData)(vlSelfRef.Testbench__DOT__conv_unit__DOT__conv__DOT__mul_gen__BRA__2__KET____DOT__mul__DOT__product_reg[3U])) 
                                << 0x20U) | (QData)((IData)(
                                                            vlSelfRef.Testbench__DOT__conv_unit__DOT__conv__DOT__mul_gen__BRA__2__KET____DOT__mul__DOT__product_reg[2U]))) 
                              >> 0x20U));
    __Vtemp_10[2U] = 0U;
    __Vtemp_11[0U] = (IData)(vlSelfRef.Testbench__DOT__conv_unit__DOT__conv__DOT__mul_gen__BRA__2__KET____DOT__mul__DOT__multiplicand_reg);
    __Vtemp_11[1U] = (IData)((vlSelfRef.Testbench__DOT__conv_unit__DOT__conv__DOT__mul_gen__BRA__2__KET____DOT__mul__DOT__multiplicand_reg 
                              >> 0x20U));
    __Vtemp_11[2U] = 0U;
    VL_ADD_W(3, __Vtemp_12, __Vtemp_10, __Vtemp_11);
    vlSelfRef.Testbench__DOT__conv_unit__DOT__conv__DOT__mul_gen__BRA__2__KET____DOT__mul__DOT__add_result[0U] 
        = __Vtemp_12[0U];
    vlSelfRef.Testbench__DOT__conv_unit__DOT__conv__DOT__mul_gen__BRA__2__KET____DOT__mul__DOT__add_result[1U] 
        = __Vtemp_12[1U];
    vlSelfRef.Testbench__DOT__conv_unit__DOT__conv__DOT__mul_gen__BRA__2__KET____DOT__mul__DOT__add_result[2U] 
        = (1U & __Vtemp_12[2U]);
    __Vtemp_14[0U] = (IData)((((QData)((IData)(vlSelfRef.Testbench__DOT__conv_unit__DOT__conv__DOT__mul_gen__BRA__3__KET____DOT__mul__DOT__product_reg[3U])) 
                               << 0x20U) | (QData)((IData)(
                                                           vlSelfRef.Testbench__DOT__conv_unit__DOT__conv__DOT__mul_gen__BRA__3__KET____DOT__mul__DOT__product_reg[2U]))));
    __Vtemp_14[1U] = (IData)(((((QData)((IData)(vlSelfRef.Testbench__DOT__conv_unit__DOT__conv__DOT__mul_gen__BRA__3__KET____DOT__mul__DOT__product_reg[3U])) 
                                << 0x20U) | (QData)((IData)(
                                                            vlSelfRef.Testbench__DOT__conv_unit__DOT__conv__DOT__mul_gen__BRA__3__KET____DOT__mul__DOT__product_reg[2U]))) 
                              >> 0x20U));
    __Vtemp_14[2U] = 0U;
    __Vtemp_15[0U] = (IData)(vlSelfRef.Testbench__DOT__conv_unit__DOT__conv__DOT__mul_gen__BRA__3__KET____DOT__mul__DOT__multiplicand_reg);
    __Vtemp_15[1U] = (IData)((vlSelfRef.Testbench__DOT__conv_unit__DOT__conv__DOT__mul_gen__BRA__3__KET____DOT__mul__DOT__multiplicand_reg 
                              >> 0x20U));
    __Vtemp_15[2U] = 0U;
    VL_ADD_W(3, __Vtemp_16, __Vtemp_14, __Vtemp_15);
    vlSelfRef.Testbench__DOT__conv_unit__DOT__conv__DOT__mul_gen__BRA__3__KET____DOT__mul__DOT__add_result[0U] 
        = __Vtemp_16[0U];
    vlSelfRef.Testbench__DOT__conv_unit__DOT__conv__DOT__mul_gen__BRA__3__KET____DOT__mul__DOT__add_result[1U] 
        = __Vtemp_16[1U];
    vlSelfRef.Testbench__DOT__conv_unit__DOT__conv__DOT__mul_gen__BRA__3__KET____DOT__mul__DOT__add_result[2U] 
        = (1U & __Vtemp_16[2U]);
    vlSelfRef.Testbench__DOT__conv_unit__DOT__conv__DOT__vector_stage1[0U].__PVT__valid 
        = vlSelfRef.Testbench__DOT__conv_unit__DOT__conv__DOT__mul_gen__BRA__0__KET____DOT__mul__DOT__finish_reg;
    VL_ASSIGN_W(128,vlSelfRef.Testbench__DOT__conv_unit__DOT__conv__DOT__vector_stage1
                [0U].__PVT__data, vlSelfRef.Testbench__DOT__conv_unit__DOT__conv__DOT__mul_gen__BRA__0__KET____DOT__mul__DOT__product_reg);
    vlSelfRef.Testbench__DOT__conv_unit__DOT__conv__DOT__vector_stage1[1U].__PVT__valid 
        = vlSelfRef.Testbench__DOT__conv_unit__DOT__conv__DOT__mul_gen__BRA__1__KET____DOT__mul__DOT__finish_reg;
    VL_ASSIGN_W(128,vlSelfRef.Testbench__DOT__conv_unit__DOT__conv__DOT__vector_stage1
                [1U].__PVT__data, vlSelfRef.Testbench__DOT__conv_unit__DOT__conv__DOT__mul_gen__BRA__1__KET____DOT__mul__DOT__product_reg);
    vlSelfRef.Testbench__DOT__conv_unit__DOT__conv__DOT__vector_stage1[2U].__PVT__valid 
        = vlSelfRef.Testbench__DOT__conv_unit__DOT__conv__DOT__mul_gen__BRA__2__KET____DOT__mul__DOT__finish_reg;
    VL_ASSIGN_W(128,vlSelfRef.Testbench__DOT__conv_unit__DOT__conv__DOT__vector_stage1
                [2U].__PVT__data, vlSelfRef.Testbench__DOT__conv_unit__DOT__conv__DOT__mul_gen__BRA__2__KET____DOT__mul__DOT__product_reg);
    vlSelfRef.Testbench__DOT__conv_unit__DOT__conv__DOT__vector_stage1[3U].__PVT__valid 
        = vlSelfRef.Testbench__DOT__conv_unit__DOT__conv__DOT__mul_gen__BRA__3__KET____DOT__mul__DOT__finish_reg;
    VL_ASSIGN_W(128,vlSelfRef.Testbench__DOT__conv_unit__DOT__conv__DOT__vector_stage1
                [3U].__PVT__data, vlSelfRef.Testbench__DOT__conv_unit__DOT__conv__DOT__mul_gen__BRA__3__KET____DOT__mul__DOT__product_reg);
}

VL_ATTR_COLD void VTestbench___024root___eval_triggers__stl(VTestbench___024root* vlSelf);

VL_ATTR_COLD bool VTestbench___024root___eval_phase__stl(VTestbench___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestbench___024root___eval_phase__stl\n"); );
    VTestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    VTestbench___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelfRef.__VstlTriggered.any();
    if (__VstlExecute) {
        VTestbench___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VTestbench___024root___dump_triggers__act(VTestbench___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestbench___024root___dump_triggers__act\n"); );
    VTestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VactTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(negedge Testbench.clk)\n");
    }
    if ((2ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @(posedge Testbench.clk)\n");
    }
    if ((4ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 2 is active: @(posedge Testbench.rst)\n");
    }
    if ((8ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 3 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
    if ((0x10ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 4 is active: @(posedge Testbench.out_valid)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void VTestbench___024root___dump_triggers__nba(VTestbench___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestbench___024root___dump_triggers__nba\n"); );
    VTestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VnbaTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(negedge Testbench.clk)\n");
    }
    if ((2ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @(posedge Testbench.clk)\n");
    }
    if ((4ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 2 is active: @(posedge Testbench.rst)\n");
    }
    if ((8ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 3 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
    if ((0x10ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 4 is active: @(posedge Testbench.out_valid)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void VTestbench___024root____Vm_traceActivitySetAll(VTestbench___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestbench___024root____Vm_traceActivitySetAll\n"); );
    VTestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vm_traceActivity[0U] = 1U;
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
    vlSelfRef.__Vm_traceActivity[4U] = 1U;
    vlSelfRef.__Vm_traceActivity[5U] = 1U;
}

VL_ATTR_COLD void VTestbench___024root___ctor_var_reset(VTestbench___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestbench___024root___ctor_var_reset\n"); );
    VTestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->Testbench__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->Testbench__DOT__rst = VL_RAND_RESET_I(1);
    vlSelf->Testbench__DOT__in_data = VL_RAND_RESET_Q(64);
    for (int __Vi1 = 0; __Vi1 < 4; ++__Vi1) {
        vlSelf->Testbench__DOT__kernel.__PVT__data[__Vi1] = VL_RAND_RESET_Q(64);
    }
    vlSelf->Testbench__DOT__in_valid = VL_RAND_RESET_I(1);
    vlSelf->Testbench__DOT__in_ready = VL_RAND_RESET_I(1);
    vlSelf->Testbench__DOT__out_valid = VL_RAND_RESET_I(1);
    vlSelf->Testbench__DOT__i = VL_RAND_RESET_I(32);
    vlSelf->Testbench__DOT__j = VL_RAND_RESET_I(32);
    vlSelf->Testbench__DOT__seed = VL_RAND_RESET_I(32);
    vlSelf->Testbench__DOT__error = VL_RAND_RESET_I(1);
    for (int __Vi1 = 0; __Vi1 < 4; ++__Vi1) {
        vlSelf->Testbench__DOT__conv_unit__DOT__shifted_data.__PVT__data[__Vi1] = VL_RAND_RESET_Q(64);
    }
    vlSelf->Testbench__DOT__conv_unit__DOT__temp_valid = VL_RAND_RESET_I(1);
    vlSelf->Testbench__DOT__conv_unit__DOT__temp_ready = VL_RAND_RESET_I(1);
    vlSelf->Testbench__DOT__conv_unit__DOT__shift__DOT__state_reg = VL_RAND_RESET_I(1);
    vlSelf->Testbench__DOT__conv_unit__DOT__shift__DOT__i = VL_RAND_RESET_I(32);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        VL_RAND_RESET_W(128, vlSelf->Testbench__DOT__conv_unit__DOT__conv__DOT__vector_stage1[__Vi0].__PVT__data);
        vlSelf->Testbench__DOT__conv_unit__DOT__conv__DOT__vector_stage1[__Vi0].__PVT__valid = VL_RAND_RESET_I(1);
    }
    VL_RAND_RESET_W(128, vlSelf->Testbench__DOT__conv_unit__DOT__conv__DOT__vector_stage2.__PVT__data);
    vlSelf->Testbench__DOT__conv_unit__DOT__conv__DOT__vector_stage2.__PVT__valid = VL_RAND_RESET_I(1);
    vlSelf->Testbench__DOT__conv_unit__DOT__conv__DOT__mul_start = VL_RAND_RESET_I(1);
    vlSelf->Testbench__DOT__conv_unit__DOT__conv__DOT__state_reg = VL_RAND_RESET_I(2);
    vlSelf->Testbench__DOT__conv_unit__DOT__conv__DOT__mul_gen__BRA__0__KET____DOT__mul__DOT__multiplicand_reg = VL_RAND_RESET_Q(64);
    VL_RAND_RESET_W(128, vlSelf->Testbench__DOT__conv_unit__DOT__conv__DOT__mul_gen__BRA__0__KET____DOT__mul__DOT__product_reg);
    vlSelf->Testbench__DOT__conv_unit__DOT__conv__DOT__mul_gen__BRA__0__KET____DOT__mul__DOT__fsm_state_reg = VL_RAND_RESET_I(2);
    vlSelf->Testbench__DOT__conv_unit__DOT__conv__DOT__mul_gen__BRA__0__KET____DOT__mul__DOT__work_cnt = VL_RAND_RESET_I(6);
    vlSelf->Testbench__DOT__conv_unit__DOT__conv__DOT__mul_gen__BRA__0__KET____DOT__mul__DOT__finish_reg = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(65, vlSelf->Testbench__DOT__conv_unit__DOT__conv__DOT__mul_gen__BRA__0__KET____DOT__mul__DOT__add_result);
    vlSelf->Testbench__DOT__conv_unit__DOT__conv__DOT__mul_gen__BRA__1__KET____DOT__mul__DOT__multiplicand_reg = VL_RAND_RESET_Q(64);
    VL_RAND_RESET_W(128, vlSelf->Testbench__DOT__conv_unit__DOT__conv__DOT__mul_gen__BRA__1__KET____DOT__mul__DOT__product_reg);
    vlSelf->Testbench__DOT__conv_unit__DOT__conv__DOT__mul_gen__BRA__1__KET____DOT__mul__DOT__fsm_state_reg = VL_RAND_RESET_I(2);
    vlSelf->Testbench__DOT__conv_unit__DOT__conv__DOT__mul_gen__BRA__1__KET____DOT__mul__DOT__work_cnt = VL_RAND_RESET_I(6);
    vlSelf->Testbench__DOT__conv_unit__DOT__conv__DOT__mul_gen__BRA__1__KET____DOT__mul__DOT__finish_reg = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(65, vlSelf->Testbench__DOT__conv_unit__DOT__conv__DOT__mul_gen__BRA__1__KET____DOT__mul__DOT__add_result);
    vlSelf->Testbench__DOT__conv_unit__DOT__conv__DOT__mul_gen__BRA__2__KET____DOT__mul__DOT__multiplicand_reg = VL_RAND_RESET_Q(64);
    VL_RAND_RESET_W(128, vlSelf->Testbench__DOT__conv_unit__DOT__conv__DOT__mul_gen__BRA__2__KET____DOT__mul__DOT__product_reg);
    vlSelf->Testbench__DOT__conv_unit__DOT__conv__DOT__mul_gen__BRA__2__KET____DOT__mul__DOT__fsm_state_reg = VL_RAND_RESET_I(2);
    vlSelf->Testbench__DOT__conv_unit__DOT__conv__DOT__mul_gen__BRA__2__KET____DOT__mul__DOT__work_cnt = VL_RAND_RESET_I(6);
    vlSelf->Testbench__DOT__conv_unit__DOT__conv__DOT__mul_gen__BRA__2__KET____DOT__mul__DOT__finish_reg = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(65, vlSelf->Testbench__DOT__conv_unit__DOT__conv__DOT__mul_gen__BRA__2__KET____DOT__mul__DOT__add_result);
    vlSelf->Testbench__DOT__conv_unit__DOT__conv__DOT__mul_gen__BRA__3__KET____DOT__mul__DOT__multiplicand_reg = VL_RAND_RESET_Q(64);
    VL_RAND_RESET_W(128, vlSelf->Testbench__DOT__conv_unit__DOT__conv__DOT__mul_gen__BRA__3__KET____DOT__mul__DOT__product_reg);
    vlSelf->Testbench__DOT__conv_unit__DOT__conv__DOT__mul_gen__BRA__3__KET____DOT__mul__DOT__fsm_state_reg = VL_RAND_RESET_I(2);
    vlSelf->Testbench__DOT__conv_unit__DOT__conv__DOT__mul_gen__BRA__3__KET____DOT__mul__DOT__work_cnt = VL_RAND_RESET_I(6);
    vlSelf->Testbench__DOT__conv_unit__DOT__conv__DOT__mul_gen__BRA__3__KET____DOT__mul__DOT__finish_reg = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(65, vlSelf->Testbench__DOT__conv_unit__DOT__conv__DOT__mul_gen__BRA__3__KET____DOT__mul__DOT__add_result);
    vlSelf->Testbench__DOT__judge__DOT__dataQueue.atDefault() = VL_RAND_RESET_Q(64);
    vlSelf->Testbench__DOT__judge__DOT__request = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        VL_RAND_RESET_W(128, vlSelf->Testbench__DOT__judge__DOT__mid[__Vi0]);
    }
    VL_RAND_RESET_W(128, vlSelf->Testbench__DOT__judge__DOT__sum);
    VL_RAND_RESET_W(128, vlSelf->Testbench__DOT__judge__DOT__simulate_result);
    vlSelf->Testbench__DOT__judge__DOT__i = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(128, vlSelf->Testbench__DOT__judge__DOT__resultQueue.atDefault().data());
    vlSelf->__Vdly__Testbench__DOT__conv_unit__DOT__conv__DOT__mul_gen__BRA__0__KET____DOT__mul__DOT__work_cnt = VL_RAND_RESET_I(6);
    vlSelf->__Vdly__Testbench__DOT__conv_unit__DOT__conv__DOT__mul_gen__BRA__1__KET____DOT__mul__DOT__work_cnt = VL_RAND_RESET_I(6);
    vlSelf->__Vdly__Testbench__DOT__conv_unit__DOT__conv__DOT__mul_gen__BRA__2__KET____DOT__mul__DOT__work_cnt = VL_RAND_RESET_I(6);
    vlSelf->__Vdly__Testbench__DOT__conv_unit__DOT__conv__DOT__mul_gen__BRA__3__KET____DOT__mul__DOT__work_cnt = VL_RAND_RESET_I(6);
    vlSelf->__Vtrigprevexpr___TOP__Testbench__DOT__clk__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__Testbench__DOT__rst__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__Testbench__DOT__out_valid__0 = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 6; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
