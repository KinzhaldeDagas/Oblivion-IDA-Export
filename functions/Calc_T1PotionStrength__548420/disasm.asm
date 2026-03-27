0x548420: sub     esp, 8
0x548423: fld     dword ptr ds:0B379E0h
0x548429: push    esi
0x54842A: fmul    [esp+0Ch+arg_C]
0x54842E: push    edi
0x54842F: fdiv    [esp+10h+arg_8]
0x548433: fstp    [esp+10h+arg_C]
0x548437: fld     [esp+10h+arg_C]
0x54843B: fld     dword ptr ds:0B38270h
0x548441: fld1
0x548443: fadd    st(1), st
0x548445: fdivrp  st(1), st
0x548447: fstp    [esp+10h+arg_C]
0x54844B: fld     [esp+10h+arg_C]
0x54844F: call    __CIpow
0x548454: fstp    [esp+10h+arg_C]
0x548458: fld     [esp+10h+arg_C]
0x54845C: mov     edi, [esp+10h+arg_0]
0x548460: fstp    [esp+10h+arg_C]
0x548464: mov     eax, [esp+10h+arg_10]
0x548468: fld     [esp+10h+arg_C]
0x54846C: mov     esi, [esp+10h+arg_4]
0x548470: fst     dword ptr [edi]
0x548472: add     eax, 0FFFFFFFFh; switch 5 cases
0x548475: cmp     eax, 4
0x548478: fdiv    dword ptr ds:0B379E0h
0x54847E: fdiv    dword ptr ds:0B37DD8h
0x548484: fstp    dword ptr [esi]
0x548486: ja      Calc_T1PotionStrength___def_548490
0x54848C: fld     [esp+10h+arg_20]
0x548490: jmp     ds:jpt_548490[eax*4]; switch jump
0x548497: cmp     [esp+10h+arg_14], 0; jumptable 00548490 case 1
0x54849C: fstp    st
0x54849E: jnz     short loc_5484EA
0x5484A0: cmp     [esp+10h+arg_24], 0
0x5484A5: jnz     Calc_T1PotionStrength___def_548490
0x5484AB: mov     ecx, offset fPotionT1RetMagMult
0x5484B0: call    GameSetting_GetSafeFloatPointer
0x5484B5: fld     dword ptr [eax]
0x5484B7: fmul    [esp+10h+arg_18]
0x5484BB: mov     ecx, offset fPotionT1RetDurMult
0x5484C0: fmul    dword ptr [edi]
0x5484C2: fadd    dword ptr [edi]
0x5484C4: fstp    dword ptr [edi]
0x5484C6: call    GameSetting_GetSafeFloatPointer
0x5484CB: fld     dword ptr [eax]
0x5484CD: pop     edi
0x5484CE: fmul    [esp+0Ch+arg_18]
0x5484D2: fmul    dword ptr [esi]
0x5484D4: fadd    dword ptr [esi]
0x5484D6: fstp    dword ptr [esi]
0x5484D8: pop     esi
0x5484D9: add     esp, 8
0x5484DC: retn
0x5484DD: cmp     [esp+10h+arg_14], 0; jumptable 00548490 case 2
0x5484E2: fstp    st
0x5484E4: jz      Calc_T1PotionStrength___def_548490
0x5484EA: cmp     [esp+10h+arg_24], 0
0x5484EF: jnz     Calc_T1PotionStrength___def_548490
0x5484F5: fld     dword ptr ds:0B37A08h
0x5484FB: fld     [esp+10h+arg_1C]
0x5484FF: fld     st
0x548501: fmulp   st(2), st
0x548503: fld     dword ptr [edi]
0x548505: fmulp   st(2), st
0x548507: fld     dword ptr [edi]
0x548509: faddp   st(2), st
0x54850B: fxch    st(1)
0x54850D: fstp    dword ptr [edi]
0x54850F: pop     edi
0x548510: fmul    dword ptr ds:0B37A10h
0x548516: fmul    dword ptr [esi]
0x548518: fadd    dword ptr [esi]
0x54851A: fstp    dword ptr [esi]
0x54851C: pop     esi
0x54851D: add     esp, 8
0x548520: retn
0x548521: cmp     [esp+10h+arg_14], 0; jumptable 00548490 case 5
0x548526: jz      short loc_548597
0x548528: cmp     [esp+10h+arg_24], 0
0x54852D: jnz     short loc_548597
0x54852F: mov     ecx, offset fPotionT1CalMagMult
0x548534: fstp    st
0x548536: call    GameSetting_GetSafeFloatPointer
0x54853B: fld     dword ptr [eax]
0x54853D: fmul    [esp+10h+arg_20]
0x548541: mov     ecx, offset fPotionT1AleMagMult
0x548546: fmul    dword ptr [edi]
0x548548: fstp    [esp+10h+var_8]
0x54854C: call    GameSetting_GetSafeFloatPointer
0x548551: fld     dword ptr [eax]
0x548553: mov     ecx, offset fPotionT1CalMagMult
0x548558: fmul    [esp+10h+arg_1C]
0x54855C: fmul    dword ptr [edi]
0x54855E: fadd    [esp+10h+var_8]
0x548562: fadd    dword ptr [edi]
0x548564: fstp    dword ptr [edi]
0x548566: call    GameSetting_GetSafeFloatPointer
0x54856B: fld     dword ptr [eax]
0x54856D: mov     ecx, offset fPotionT1AleDurMult
0x548572: fmul    [esp+10h+arg_20]
0x548576: fmul    dword ptr [esi]
0x548578: fstp    [esp+10h+var_8]
0x54857C: call    GameSetting_GetSafeFloatPointer
0x548581: fld     dword ptr [eax]
0x548583: fmul    [esp+10h+arg_1C]
0x548587: fmul    dword ptr [esi]
0x548589: fadd    [esp+10h+var_8]
0x54858D: fadd    dword ptr [esi]
0x54858F: fstp    dword ptr [esi]
0x548591: fld     [esp+10h+arg_20]
0x548595: jmp     short loc_5485B3; jumptable 00548490 case 3
0x548597: fld     dword ptr ds:0B379F8h
0x54859D: fmul    st, st(1)
0x54859F: fmul    dword ptr [edi]
0x5485A1: fadd    dword ptr [edi]
0x5485A3: fstp    dword ptr [edi]
0x5485A5: fld     dword ptr ds:0B379F8h
0x5485AB: fmul    st, st(1)
0x5485AD: fmul    dword ptr [esi]
0x5485AF: fadd    dword ptr [esi]
0x5485B1: fstp    dword ptr [esi]
0x5485B3: fld     dword ptr ds:0B379F8h; jumptable 00548490 case 3
0x5485B9: fmul    st, st(1)
0x5485BB: fmul    dword ptr [edi]
0x5485BD: fadd    dword ptr [edi]
0x5485BF: fstp    dword ptr [edi]
0x5485C1: pop     edi
0x5485C2: fmul    dword ptr ds:0B379F8h
0x5485C8: fmul    dword ptr [esi]
0x5485CA: fadd    dword ptr [esi]
0x5485CC: fstp    dword ptr [esi]
0x5485CE: pop     esi
0x5485CF: add     esp, 8
0x5485D2: retn
0x5485D3: cmp     [esp+10h+arg_14], 0; jumptable 00548490 case 4
0x5485D8: fstp    st
0x5485DA: jnz     short loc_54864D
0x5485DC: cmp     [esp+10h+arg_24], 0
0x5485E1: jnz     short loc_54864D
0x5485E3: mov     ecx, offset fPotionT1RetMagMult
0x5485E8: call    GameSetting_GetSafeFloatPointer
0x5485ED: fld     dword ptr [eax]
0x5485EF: fld     dword ptr [edi]
0x5485F1: mov     ecx, offset fPotionT1CalMagMult
0x5485F6: fmul    [esp+10h+arg_18]
0x5485FA: fmulp   st(1), st
0x5485FC: fstp    [esp+10h+var_8]
0x548600: call    GameSetting_GetSafeFloatPointer
0x548605: fld     dword ptr [esi]
0x548607: mov     ecx, offset fPotionT1RetDurMult
0x54860C: fmul    [esp+10h+arg_20]
0x548610: fmul    dword ptr [eax]
0x548612: fadd    [esp+10h+var_8]
0x548616: fadd    dword ptr [edi]
0x548618: fstp    dword ptr [edi]
0x54861A: call    GameSetting_GetSafeFloatPointer
0x54861F: fld     dword ptr [eax]
0x548621: mov     ecx, offset fPotionT1CalMagMult
0x548626: fld     dword ptr [esi]
0x548628: fmul    [esp+10h+arg_18]
0x54862C: fmulp   st(1), st
0x54862E: fstp    [esp+10h+var_8]
0x548632: call    GameSetting_GetSafeFloatPointer
0x548637: fld     dword ptr [esi]
0x548639: pop     edi
0x54863A: fmul    [esp+0Ch+arg_20]
0x54863E: fmul    dword ptr [eax]
0x548640: fadd    [esp+0Ch+var_8]
0x548644: fadd    dword ptr [esi]
0x548646: fstp    dword ptr [esi]
0x548648: pop     esi
0x548649: add     esp, 8
0x54864C: retn
0x54864D: fld     dword ptr ds:0B379F8h
0x548653: fld     [esp+10h+arg_20]
0x548657: fld     st
0x548659: fmulp   st(2), st
0x54865B: fld     dword ptr [edi]
0x54865D: fmulp   st(2), st
0x54865F: fld     dword ptr [edi]
0x548661: faddp   st(2), st
0x548663: fxch    st(1)
0x548665: fstp    dword ptr [edi]
0x548667: pop     edi
0x548668: fmul    dword ptr ds:0B379F8h
0x54866E: fmul    dword ptr [esi]
0x548670: fadd    dword ptr [esi]
0x548672: fstp    dword ptr [esi]
0x548674: pop     esi
0x548675: add     esp, 8
0x548678: retn
