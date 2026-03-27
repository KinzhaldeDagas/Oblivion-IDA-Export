0x5486A0: sub     esp, 8
0x5486A3: fld     [esp+8+arg_8]
0x5486A7: mov     eax, [esp+8+arg_C]
0x5486AB: fdiv    [esp+8+arg_4]
0x5486AF: push    esi
0x5486B0: mov     esi, [esp+0Ch+arg_0]
0x5486B4: add     eax, 0FFFFFFFFh; switch 5 cases
0x5486B7: cmp     eax, 4
0x5486BA: fdiv    dword ptr ds:0B37DD8h
0x5486C0: fstp    [esp+0Ch+arg_8]
0x5486C4: fld     [esp+0Ch+arg_8]
0x5486C8: fst     dword ptr [esi]
0x5486CA: ja      Calc_T2PotionStrength___def_5486D0
0x5486D0: jmp     ds:jpt_5486D0[eax*4]; switch jump
0x5486D7: cmp     [esp+0Ch+arg_10], 0; jumptable 005486D0 case 1
0x5486DC: jnz     short loc_548711
0x5486DE: cmp     [esp+0Ch+arg_20], 0
0x5486E3: fstp    st
0x5486E5: jnz     loc_5487D6
0x5486EB: mov     ecx, offset fPotionT2RetDurMult
0x5486F0: call    GameSetting_GetSafeFloatPointer
0x5486F5: fld     dword ptr [esi]
0x5486F7: fmul    [esp+0Ch+arg_14]
0x5486FB: fmul    dword ptr [eax]
0x5486FD: fadd    dword ptr [esi]
0x5486FF: fstp    dword ptr [esi]
0x548701: pop     esi
0x548702: add     esp, 8
0x548705: retn
0x548706: cmp     [esp+0Ch+arg_10], 0; jumptable 005486D0 case 2
0x54870B: jz      Calc_T2PotionStrength___def_5486D0
0x548711: cmp     [esp+0Ch+arg_20], 0
0x548716: jnz     Calc_T2PotionStrength___def_5486D0
0x54871C: fld     st
0x54871E: fmul    [esp+0Ch+arg_18]
0x548722: fmul    dword ptr ds:0B37A28h
0x548728: faddp   st(1), st
0x54872A: fstp    dword ptr [esi]
0x54872C: pop     esi
0x54872D: add     esp, 8
0x548730: retn
0x548731: fld     st; jumptable 005486D0 case 3
0x548733: fmul    [esp+0Ch+arg_1C]
0x548737: fmul    dword ptr ds:0B37A20h
0x54873D: faddp   st(1), st
0x54873F: fstp    dword ptr [esi]
0x548741: pop     esi
0x548742: add     esp, 8
0x548745: retn
0x548746: cmp     [esp+0Ch+arg_10], 0; jumptable 005486D0 case 5
0x54874B: jz      short loc_548731; jumptable 005486D0 case 3
0x54874D: cmp     [esp+0Ch+arg_20], 0
0x548752: jnz     short loc_548731; jumptable 005486D0 case 3
0x548754: mov     ecx, offset fPotionT2AleDurMult
0x548759: fstp    st
0x54875B: call    GameSetting_GetSafeFloatPointer
0x548760: fld     dword ptr [eax]
0x548762: fld     dword ptr [esi]
0x548764: mov     ecx, offset fPotionT2CalDurMult
0x548769: fmul    [esp+0Ch+arg_18]
0x54876D: fmulp   st(1), st
0x54876F: fstp    [esp+0Ch+var_8]
0x548773: call    GameSetting_GetSafeFloatPointer
0x548778: fld     dword ptr [esi]
0x54877A: fmul    [esp+0Ch+arg_1C]
0x54877E: fmul    dword ptr [eax]
0x548780: fadd    [esp+0Ch+var_8]
0x548784: fadd    dword ptr [esi]
0x548786: fstp    dword ptr [esi]
0x548788: pop     esi
0x548789: add     esp, 8
0x54878C: retn
0x54878D: cmp     [esp+0Ch+arg_10], 0; jumptable 005486D0 case 4
0x548792: jnz     short loc_548731; jumptable 005486D0 case 3
0x548794: cmp     [esp+0Ch+arg_20], 0
0x548799: jnz     short loc_548731; jumptable 005486D0 case 3
0x54879B: mov     ecx, offset fPotionT2RetDurMult
0x5487A0: fstp    st
0x5487A2: call    GameSetting_GetSafeFloatPointer
0x5487A7: fld     dword ptr [eax]
0x5487A9: fld     dword ptr [esi]
0x5487AB: mov     ecx, offset fPotionT2CalDurMult
0x5487B0: fmul    [esp+0Ch+arg_14]
0x5487B4: fmulp   st(1), st
0x5487B6: fstp    [esp+0Ch+var_8]
0x5487BA: call    GameSetting_GetSafeFloatPointer
0x5487BF: fld     dword ptr [esi]
0x5487C1: fmul    [esp+0Ch+arg_1C]
0x5487C5: fmul    dword ptr [eax]
0x5487C7: fadd    [esp+0Ch+var_8]
0x5487CB: fadd    dword ptr [esi]
0x5487CD: fstp    dword ptr [esi]
0x5487CF: pop     esi
0x5487D0: add     esp, 8
0x5487D3: retn
