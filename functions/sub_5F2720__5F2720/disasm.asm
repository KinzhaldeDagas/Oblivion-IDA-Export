0x5F2720: sub     esp, 0Ch
0x5F2723: fldz
0x5F2725: push    esi
0x5F2726: mov     esi, ecx
0x5F2728: fstp    [esp+10h+var_C]
0x5F272C: mov     ecx, ds:0B333C4h
0x5F2732: cmp     esi, ecx
0x5F2734: jnz     short loc_5F2741
0x5F2736: push    0Ah
0x5F2738: push    0
0x5F273A: call    Player_GetAVModifierf
0x5F273F: jmp     short loc_5F2754
0x5F2741: mov     ecx, [esi+58h]
0x5F2744: test    ecx, ecx
0x5F2746: jz      short loc_5F2758
0x5F2748: mov     eax, [ecx]
0x5F274A: mov     edx, [eax+468h]
0x5F2750: push    0Ah
0x5F2752: call    edx
0x5F2754: fstp    [esp+10h+var_C]
0x5F2758: mov     eax, [esi]
0x5F275A: mov     edx, [eax+288h]
0x5F2760: push    0Ah
0x5F2762: mov     ecx, esi
0x5F2764: call    edx
0x5F2766: fstp    [esp+10h+var_8]
0x5F276A: fld     [esp+10h+var_8]
0x5F276E: fld     st
0x5F2770: call    Double_To_SInt32
0x5F2775: mov     [esp+10h+var_8], eax
0x5F2779: fild    [esp+10h+var_8]
0x5F277D: fstp    [esp+10h+var_8]
0x5F2781: fld     [esp+10h+var_8]
0x5F2785: fld     st
0x5F2787: fsubp   st(2), st
0x5F2789: fxch    st(1)
0x5F278B: fcomp   qword ptr ds:0A2FC68h
0x5F2791: fnstsw  ax
0x5F2793: test    ah, 1
0x5F2796: jz      short loc_5F279E
0x5F2798: fsub    qword ptr ds:0A2F928h
0x5F279E: fstp    [esp+10h+var_8]
0x5F27A2: push    0Ah
0x5F27A4: fld     [esp+14h+var_8]
0x5F27A8: mov     ecx, esi
0x5F27AA: fstp    [esp+14h+var_4]
0x5F27AE: call    Actor_GetBaseCalcAVi
0x5F27B3: mov     [esp+10h+var_8], eax
0x5F27B7: fild    [esp+10h+var_8]
0x5F27BB: fadd    [esp+10h+var_C]
0x5F27BF: fld     [esp+10h+var_4]
0x5F27C3: fcompp
0x5F27C5: fnstsw  ax
0x5F27C7: test    ah, 5
0x5F27CA: jp      short loc_5F2819
0x5F27CC: mov     eax, [esi]
0x5F27CE: mov     edx, [eax+284h]
0x5F27D4: push    5
0x5F27D6: mov     ecx, esi
0x5F27D8: call    edx
0x5F27DA: push    eax
0x5F27DB: call    Calc_FatigueReturnRate
0x5F27E0: fmul    [esp+14h+arg_0]
0x5F27E4: add     esp, 4
0x5F27E7: fstp    [esp+10h+arg_0]
0x5F27EB: fldz
0x5F27ED: fld     [esp+10h+arg_0]
0x5F27F1: fcom    st(1)
0x5F27F3: fnstsw  ax
0x5F27F5: fstp    st(1)
0x5F27F7: test    ah, 41h
0x5F27FA: jnz     short loc_5F2817
0x5F27FC: mov     eax, [esi]
0x5F27FE: mov     edx, [eax+2A4h]
0x5F2804: push    0
0x5F2806: push    ecx
0x5F2807: fstp    [esp+18h+var_18]
0x5F280A: push    0Ah
0x5F280C: mov     ecx, esi
0x5F280E: call    edx
0x5F2810: pop     esi
0x5F2811: add     esp, 0Ch
0x5F2814: retn    4
0x5F2817: fstp    st
0x5F2819: pop     esi
0x5F281A: add     esp, 0Ch
0x5F281D: retn    4
