// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VTestbench__Syms.h"


void VTestbench___024root__trace_chg_0_sub_0(VTestbench___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void VTestbench___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestbench___024root__trace_chg_0\n"); );
    // Init
    VTestbench___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VTestbench___024root*>(voidSelf);
    VTestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    VTestbench___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void VTestbench___024root__trace_chg_0_sub_0(VTestbench___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestbench___024root__trace_chg_0_sub_0\n"); );
    VTestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    VlWide<3>/*95:0*/ __Vtemp_2;
    VlWide<3>/*95:0*/ __Vtemp_3;
    VlWide<3>/*95:0*/ __Vtemp_4;
    VlWide<3>/*95:0*/ __Vtemp_5;
    VlWide<3>/*95:0*/ __Vtemp_7;
    VlWide<3>/*95:0*/ __Vtemp_8;
    VlWide<3>/*95:0*/ __Vtemp_9;
    VlWide<3>/*95:0*/ __Vtemp_10;
    VlWide<3>/*95:0*/ __Vtemp_12;
    VlWide<3>/*95:0*/ __Vtemp_13;
    VlWide<3>/*95:0*/ __Vtemp_14;
    VlWide<3>/*95:0*/ __Vtemp_15;
    VlWide<3>/*95:0*/ __Vtemp_17;
    VlWide<3>/*95:0*/ __Vtemp_18;
    VlWide<3>/*95:0*/ __Vtemp_19;
    VlWide<3>/*95:0*/ __Vtemp_20;
    // Body
    if (VL_UNLIKELY(((vlSelfRef.__Vm_traceActivity[1U] 
                      | vlSelfRef.__Vm_traceActivity
                      [2U])))) {
        bufp->chgBit(oldp+0,(vlSelfRef.Testbench__DOT__rst));
        bufp->chgQData(oldp+1,(vlSelfRef.Testbench__DOT__in_data),64);
        bufp->chgQData(oldp+3,(vlSelfRef.Testbench__DOT__kernel
                               .__PVT__data[0U]),64);
        bufp->chgQData(oldp+5,(vlSelfRef.Testbench__DOT__kernel
                               .__PVT__data[1U]),64);
        bufp->chgQData(oldp+7,(vlSelfRef.Testbench__DOT__kernel
                               .__PVT__data[2U]),64);
        bufp->chgQData(oldp+9,(vlSelfRef.Testbench__DOT__kernel
                               .__PVT__data[3U]),64);
        bufp->chgBit(oldp+11,(vlSelfRef.Testbench__DOT__in_valid));
        bufp->chgIData(oldp+12,(vlSelfRef.Testbench__DOT__i),32);
        bufp->chgIData(oldp+13,(vlSelfRef.Testbench__DOT__j),32);
        bufp->chgIData(oldp+14,(vlSelfRef.Testbench__DOT__seed),32);
        bufp->chgQData(oldp+15,(vlSelfRef.Testbench__DOT__kernel
                                .__PVT__data[0U]),64);
        bufp->chgQData(oldp+17,(vlSelfRef.Testbench__DOT__kernel
                                .__PVT__data[1U]),64);
        bufp->chgQData(oldp+19,(vlSelfRef.Testbench__DOT__kernel
                                .__PVT__data[2U]),64);
        bufp->chgQData(oldp+21,(vlSelfRef.Testbench__DOT__kernel
                                .__PVT__data[3U]),64);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[3U]))) {
        bufp->chgBit(oldp+23,(vlSelfRef.Testbench__DOT__error));
        bufp->chgWData(oldp+24,(vlSelfRef.Testbench__DOT__conv_unit__DOT__conv__DOT__mul_gen__BRA__0__KET____DOT__mul__DOT__product_reg),128);
        bufp->chgBit(oldp+28,(vlSelfRef.Testbench__DOT__conv_unit__DOT__conv__DOT__mul_gen__BRA__0__KET____DOT__mul__DOT__finish_reg));
        bufp->chgQData(oldp+29,(vlSelfRef.Testbench__DOT__conv_unit__DOT__conv__DOT__mul_gen__BRA__0__KET____DOT__mul__DOT__multiplicand_reg),64);
        __Vtemp_2[0U] = (IData)((((QData)((IData)(vlSelfRef.Testbench__DOT__conv_unit__DOT__conv__DOT__mul_gen__BRA__0__KET____DOT__mul__DOT__product_reg[3U])) 
                                  << 0x20U) | (QData)((IData)(
                                                              vlSelfRef.Testbench__DOT__conv_unit__DOT__conv__DOT__mul_gen__BRA__0__KET____DOT__mul__DOT__product_reg[2U]))));
        __Vtemp_2[1U] = (IData)(((((QData)((IData)(
                                                   vlSelfRef.Testbench__DOT__conv_unit__DOT__conv__DOT__mul_gen__BRA__0__KET____DOT__mul__DOT__product_reg[3U])) 
                                   << 0x20U) | (QData)((IData)(
                                                               vlSelfRef.Testbench__DOT__conv_unit__DOT__conv__DOT__mul_gen__BRA__0__KET____DOT__mul__DOT__product_reg[2U]))) 
                                 >> 0x20U));
        __Vtemp_2[2U] = 0U;
        __Vtemp_3[0U] = (IData)(vlSelfRef.Testbench__DOT__conv_unit__DOT__conv__DOT__mul_gen__BRA__0__KET____DOT__mul__DOT__multiplicand_reg);
        __Vtemp_3[1U] = (IData)((vlSelfRef.Testbench__DOT__conv_unit__DOT__conv__DOT__mul_gen__BRA__0__KET____DOT__mul__DOT__multiplicand_reg 
                                 >> 0x20U));
        __Vtemp_3[2U] = 0U;
        VL_ADD_W(3, __Vtemp_4, __Vtemp_2, __Vtemp_3);
        __Vtemp_5[0U] = __Vtemp_4[0U];
        __Vtemp_5[1U] = __Vtemp_4[1U];
        __Vtemp_5[2U] = (1U & __Vtemp_4[2U]);
        bufp->chgWData(oldp+31,(__Vtemp_5),65);
        bufp->chgWData(oldp+34,(vlSelfRef.Testbench__DOT__conv_unit__DOT__conv__DOT__mul_gen__BRA__1__KET____DOT__mul__DOT__product_reg),128);
        bufp->chgBit(oldp+38,(vlSelfRef.Testbench__DOT__conv_unit__DOT__conv__DOT__mul_gen__BRA__1__KET____DOT__mul__DOT__finish_reg));
        bufp->chgQData(oldp+39,(vlSelfRef.Testbench__DOT__conv_unit__DOT__conv__DOT__mul_gen__BRA__1__KET____DOT__mul__DOT__multiplicand_reg),64);
        __Vtemp_7[0U] = (IData)((((QData)((IData)(vlSelfRef.Testbench__DOT__conv_unit__DOT__conv__DOT__mul_gen__BRA__1__KET____DOT__mul__DOT__product_reg[3U])) 
                                  << 0x20U) | (QData)((IData)(
                                                              vlSelfRef.Testbench__DOT__conv_unit__DOT__conv__DOT__mul_gen__BRA__1__KET____DOT__mul__DOT__product_reg[2U]))));
        __Vtemp_7[1U] = (IData)(((((QData)((IData)(
                                                   vlSelfRef.Testbench__DOT__conv_unit__DOT__conv__DOT__mul_gen__BRA__1__KET____DOT__mul__DOT__product_reg[3U])) 
                                   << 0x20U) | (QData)((IData)(
                                                               vlSelfRef.Testbench__DOT__conv_unit__DOT__conv__DOT__mul_gen__BRA__1__KET____DOT__mul__DOT__product_reg[2U]))) 
                                 >> 0x20U));
        __Vtemp_7[2U] = 0U;
        __Vtemp_8[0U] = (IData)(vlSelfRef.Testbench__DOT__conv_unit__DOT__conv__DOT__mul_gen__BRA__1__KET____DOT__mul__DOT__multiplicand_reg);
        __Vtemp_8[1U] = (IData)((vlSelfRef.Testbench__DOT__conv_unit__DOT__conv__DOT__mul_gen__BRA__1__KET____DOT__mul__DOT__multiplicand_reg 
                                 >> 0x20U));
        __Vtemp_8[2U] = 0U;
        VL_ADD_W(3, __Vtemp_9, __Vtemp_7, __Vtemp_8);
        __Vtemp_10[0U] = __Vtemp_9[0U];
        __Vtemp_10[1U] = __Vtemp_9[1U];
        __Vtemp_10[2U] = (1U & __Vtemp_9[2U]);
        bufp->chgWData(oldp+41,(__Vtemp_10),65);
        bufp->chgWData(oldp+44,(vlSelfRef.Testbench__DOT__conv_unit__DOT__conv__DOT__mul_gen__BRA__2__KET____DOT__mul__DOT__product_reg),128);
        bufp->chgBit(oldp+48,(vlSelfRef.Testbench__DOT__conv_unit__DOT__conv__DOT__mul_gen__BRA__2__KET____DOT__mul__DOT__finish_reg));
        bufp->chgQData(oldp+49,(vlSelfRef.Testbench__DOT__conv_unit__DOT__conv__DOT__mul_gen__BRA__2__KET____DOT__mul__DOT__multiplicand_reg),64);
        __Vtemp_12[0U] = (IData)((((QData)((IData)(
                                                   vlSelfRef.Testbench__DOT__conv_unit__DOT__conv__DOT__mul_gen__BRA__2__KET____DOT__mul__DOT__product_reg[3U])) 
                                   << 0x20U) | (QData)((IData)(
                                                               vlSelfRef.Testbench__DOT__conv_unit__DOT__conv__DOT__mul_gen__BRA__2__KET____DOT__mul__DOT__product_reg[2U]))));
        __Vtemp_12[1U] = (IData)(((((QData)((IData)(
                                                    vlSelfRef.Testbench__DOT__conv_unit__DOT__conv__DOT__mul_gen__BRA__2__KET____DOT__mul__DOT__product_reg[3U])) 
                                    << 0x20U) | (QData)((IData)(
                                                                vlSelfRef.Testbench__DOT__conv_unit__DOT__conv__DOT__mul_gen__BRA__2__KET____DOT__mul__DOT__product_reg[2U]))) 
                                  >> 0x20U));
        __Vtemp_12[2U] = 0U;
        __Vtemp_13[0U] = (IData)(vlSelfRef.Testbench__DOT__conv_unit__DOT__conv__DOT__mul_gen__BRA__2__KET____DOT__mul__DOT__multiplicand_reg);
        __Vtemp_13[1U] = (IData)((vlSelfRef.Testbench__DOT__conv_unit__DOT__conv__DOT__mul_gen__BRA__2__KET____DOT__mul__DOT__multiplicand_reg 
                                  >> 0x20U));
        __Vtemp_13[2U] = 0U;
        VL_ADD_W(3, __Vtemp_14, __Vtemp_12, __Vtemp_13);
        __Vtemp_15[0U] = __Vtemp_14[0U];
        __Vtemp_15[1U] = __Vtemp_14[1U];
        __Vtemp_15[2U] = (1U & __Vtemp_14[2U]);
        bufp->chgWData(oldp+51,(__Vtemp_15),65);
        bufp->chgWData(oldp+54,(vlSelfRef.Testbench__DOT__conv_unit__DOT__conv__DOT__mul_gen__BRA__3__KET____DOT__mul__DOT__product_reg),128);
        bufp->chgBit(oldp+58,(vlSelfRef.Testbench__DOT__conv_unit__DOT__conv__DOT__mul_gen__BRA__3__KET____DOT__mul__DOT__finish_reg));
        bufp->chgQData(oldp+59,(vlSelfRef.Testbench__DOT__conv_unit__DOT__conv__DOT__mul_gen__BRA__3__KET____DOT__mul__DOT__multiplicand_reg),64);
        __Vtemp_17[0U] = (IData)((((QData)((IData)(
                                                   vlSelfRef.Testbench__DOT__conv_unit__DOT__conv__DOT__mul_gen__BRA__3__KET____DOT__mul__DOT__product_reg[3U])) 
                                   << 0x20U) | (QData)((IData)(
                                                               vlSelfRef.Testbench__DOT__conv_unit__DOT__conv__DOT__mul_gen__BRA__3__KET____DOT__mul__DOT__product_reg[2U]))));
        __Vtemp_17[1U] = (IData)(((((QData)((IData)(
                                                    vlSelfRef.Testbench__DOT__conv_unit__DOT__conv__DOT__mul_gen__BRA__3__KET____DOT__mul__DOT__product_reg[3U])) 
                                    << 0x20U) | (QData)((IData)(
                                                                vlSelfRef.Testbench__DOT__conv_unit__DOT__conv__DOT__mul_gen__BRA__3__KET____DOT__mul__DOT__product_reg[2U]))) 
                                  >> 0x20U));
        __Vtemp_17[2U] = 0U;
        __Vtemp_18[0U] = (IData)(vlSelfRef.Testbench__DOT__conv_unit__DOT__conv__DOT__mul_gen__BRA__3__KET____DOT__mul__DOT__multiplicand_reg);
        __Vtemp_18[1U] = (IData)((vlSelfRef.Testbench__DOT__conv_unit__DOT__conv__DOT__mul_gen__BRA__3__KET____DOT__mul__DOT__multiplicand_reg 
                                  >> 0x20U));
        __Vtemp_18[2U] = 0U;
        VL_ADD_W(3, __Vtemp_19, __Vtemp_17, __Vtemp_18);
        __Vtemp_20[0U] = __Vtemp_19[0U];
        __Vtemp_20[1U] = __Vtemp_19[1U];
        __Vtemp_20[2U] = (1U & __Vtemp_19[2U]);
        bufp->chgWData(oldp+61,(__Vtemp_20),65);
        bufp->chgBit(oldp+64,(vlSelfRef.Testbench__DOT__judge__DOT__request));
        bufp->chgWData(oldp+65,(vlSelfRef.Testbench__DOT__judge__DOT__mid[0]),128);
        bufp->chgWData(oldp+69,(vlSelfRef.Testbench__DOT__judge__DOT__mid[1]),128);
        bufp->chgWData(oldp+73,(vlSelfRef.Testbench__DOT__judge__DOT__mid[2]),128);
        bufp->chgWData(oldp+77,(vlSelfRef.Testbench__DOT__judge__DOT__mid[3]),128);
        bufp->chgWData(oldp+81,(vlSelfRef.Testbench__DOT__judge__DOT__sum),128);
        bufp->chgWData(oldp+85,(vlSelfRef.Testbench__DOT__judge__DOT__simulate_result),128);
        bufp->chgIData(oldp+89,(vlSelfRef.Testbench__DOT__judge__DOT__i),32);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[4U]))) {
        bufp->chgBit(oldp+90,(vlSelfRef.Testbench__DOT__in_ready));
        bufp->chgWData(oldp+91,(vlSelfRef.Testbench__DOT__conv_unit__DOT__conv__DOT__vector_stage2
                                .__PVT__data),128);
        bufp->chgBit(oldp+95,(vlSelfRef.Testbench__DOT__out_valid));
        bufp->chgQData(oldp+96,(vlSelfRef.Testbench__DOT__conv_unit__DOT__shifted_data
                                .__PVT__data[0U]),64);
        bufp->chgQData(oldp+98,(vlSelfRef.Testbench__DOT__conv_unit__DOT__shifted_data
                                .__PVT__data[1U]),64);
        bufp->chgQData(oldp+100,(vlSelfRef.Testbench__DOT__conv_unit__DOT__shifted_data
                                 .__PVT__data[2U]),64);
        bufp->chgQData(oldp+102,(vlSelfRef.Testbench__DOT__conv_unit__DOT__shifted_data
                                 .__PVT__data[3U]),64);
        bufp->chgBit(oldp+104,(vlSelfRef.Testbench__DOT__conv_unit__DOT__temp_valid));
        bufp->chgBit(oldp+105,(vlSelfRef.Testbench__DOT__conv_unit__DOT__temp_ready));
        bufp->chgBit(oldp+106,(vlSelfRef.Testbench__DOT__conv_unit__DOT__conv__DOT__vector_stage2
                               .__PVT__valid));
        bufp->chgBit(oldp+107,(vlSelfRef.Testbench__DOT__conv_unit__DOT__conv__DOT__mul_start));
        bufp->chgCData(oldp+108,(vlSelfRef.Testbench__DOT__conv_unit__DOT__conv__DOT__state_reg),2);
        bufp->chgQData(oldp+109,(vlSelfRef.Testbench__DOT__conv_unit__DOT__shifted_data
                                 .__PVT__data[0U]),64);
        bufp->chgCData(oldp+111,(vlSelfRef.Testbench__DOT__conv_unit__DOT__conv__DOT__mul_gen__BRA__0__KET____DOT__mul__DOT__fsm_state_reg),2);
        bufp->chgQData(oldp+112,(vlSelfRef.Testbench__DOT__conv_unit__DOT__shifted_data
                                 .__PVT__data[1U]),64);
        bufp->chgCData(oldp+114,(vlSelfRef.Testbench__DOT__conv_unit__DOT__conv__DOT__mul_gen__BRA__1__KET____DOT__mul__DOT__fsm_state_reg),2);
        bufp->chgQData(oldp+115,(vlSelfRef.Testbench__DOT__conv_unit__DOT__shifted_data
                                 .__PVT__data[2U]),64);
        bufp->chgCData(oldp+117,(vlSelfRef.Testbench__DOT__conv_unit__DOT__conv__DOT__mul_gen__BRA__2__KET____DOT__mul__DOT__fsm_state_reg),2);
        bufp->chgQData(oldp+118,(vlSelfRef.Testbench__DOT__conv_unit__DOT__shifted_data
                                 .__PVT__data[3U]),64);
        bufp->chgCData(oldp+120,(vlSelfRef.Testbench__DOT__conv_unit__DOT__conv__DOT__mul_gen__BRA__3__KET____DOT__mul__DOT__fsm_state_reg),2);
        bufp->chgIData(oldp+121,(vlSelfRef.Testbench__DOT__conv_unit__DOT__conv__DOT__unnamedblk1__DOT__j),32);
        bufp->chgBit(oldp+122,(vlSelfRef.Testbench__DOT__conv_unit__DOT__shift__DOT__state_reg));
        bufp->chgIData(oldp+123,(vlSelfRef.Testbench__DOT__conv_unit__DOT__shift__DOT__i),32);
    }
    if (VL_UNLIKELY(((vlSelfRef.__Vm_traceActivity[4U] 
                      | vlSelfRef.__Vm_traceActivity
                      [5U])))) {
        bufp->chgWData(oldp+124,(vlSelfRef.Testbench__DOT__conv_unit__DOT__conv__DOT__vector_stage1
                                 [0U].__PVT__data),128);
        bufp->chgBit(oldp+128,(vlSelfRef.Testbench__DOT__conv_unit__DOT__conv__DOT__vector_stage1
                               [0U].__PVT__valid));
        bufp->chgWData(oldp+129,(vlSelfRef.Testbench__DOT__conv_unit__DOT__conv__DOT__vector_stage1
                                 [1U].__PVT__data),128);
        bufp->chgBit(oldp+133,(vlSelfRef.Testbench__DOT__conv_unit__DOT__conv__DOT__vector_stage1
                               [1U].__PVT__valid));
        bufp->chgWData(oldp+134,(vlSelfRef.Testbench__DOT__conv_unit__DOT__conv__DOT__vector_stage1
                                 [2U].__PVT__data),128);
        bufp->chgBit(oldp+138,(vlSelfRef.Testbench__DOT__conv_unit__DOT__conv__DOT__vector_stage1
                               [2U].__PVT__valid));
        bufp->chgWData(oldp+139,(vlSelfRef.Testbench__DOT__conv_unit__DOT__conv__DOT__vector_stage1
                                 [3U].__PVT__data),128);
        bufp->chgBit(oldp+143,(vlSelfRef.Testbench__DOT__conv_unit__DOT__conv__DOT__vector_stage1
                               [3U].__PVT__valid));
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[5U]))) {
        bufp->chgCData(oldp+144,(vlSelfRef.Testbench__DOT__conv_unit__DOT__conv__DOT__mul_gen__BRA__0__KET____DOT__mul__DOT__work_cnt),6);
        bufp->chgCData(oldp+145,(vlSelfRef.Testbench__DOT__conv_unit__DOT__conv__DOT__mul_gen__BRA__1__KET____DOT__mul__DOT__work_cnt),6);
        bufp->chgCData(oldp+146,(vlSelfRef.Testbench__DOT__conv_unit__DOT__conv__DOT__mul_gen__BRA__2__KET____DOT__mul__DOT__work_cnt),6);
        bufp->chgCData(oldp+147,(vlSelfRef.Testbench__DOT__conv_unit__DOT__conv__DOT__mul_gen__BRA__3__KET____DOT__mul__DOT__work_cnt),6);
    }
    bufp->chgBit(oldp+148,(vlSelfRef.Testbench__DOT__clk));
}

void VTestbench___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestbench___024root__trace_cleanup\n"); );
    // Init
    VTestbench___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VTestbench___024root*>(voidSelf);
    VTestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[3U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[4U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[5U] = 0U;
}
