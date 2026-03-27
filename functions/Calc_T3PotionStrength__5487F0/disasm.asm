0x5487F0: sub     esp, 8
0x5487F3: fld     [esp+8+arg_8]
0x5487F7: push    esi
0x5487F8: fdiv    [esp+0Ch+arg_4]
0x5487FC: fdiv    dword ptr ds:0B37DD8h
0x548802: fstp    [esp+0Ch+arg_8]
0x548806: fld     [esp+0Ch+arg_8]
0x54880A: fld     dword ptr ds:0B38270h
0x548810: fld1
0x548812: fdivrp  st(1), st
0x548814: fstp    [esp+0Ch+arg_8]
0x548818: fld     [esp+0Ch+arg_8]
0x54881C: call    __CIpow
0x548821: fstp    [esp+0Ch+arg_8]
0x548825: fld     [esp+0Ch+arg_8]
0x548829: mov     eax, [esp+0Ch+arg_C]
0x54882D: mov     esi, [esp+0Ch+arg_0]
0x548831: fstp    [esp+0Ch+arg_8]
0x548835: fld     [esp+0Ch+arg_8]
0x548839: add     eax, 0FFFFFFFFh; switch 5 cases
0x54883C: cmp     eax, 4
0x54883F: fst     dword ptr [esi]
0x548841: ja      Calc_T3PotionStrength___def_548847
0x548847: jmp     ds:jpt_548847[eax*4]; switch jump
0x54884E: cmp     [esp+0Ch+arg_10], 0; jumptable 00548847 case 1
0x548853: jnz     short loc_548888
0x548855: cmp     [esp+0Ch+arg_20], 0
0x54885A: fstp    st
0x54885C: jnz     loc_548945
0x548862: mov     ecx, offset fPotionT3RetMagMult
0x548867: call    GameSetting_GetSafeFloatPointer
0x54886C: fld     dword ptr [esi]
0x54886E: fmul    [esp+0Ch+arg_14]
0x548872: fmul    dword ptr [eax]
0x548874: fadd    dword ptr [esi]
0x548876: fstp    dword ptr [esi]
0x548878: pop     esi
0x548879: add     esp, 8
0x54887C: retn
0x54887D: cmp     [esp+0Ch+arg_10], 0; jumptable 00548847 case 2
0x548882: jz      Calc_T3PotionStrength___def_548847
0x548888: cmp     [esp+0Ch+arg_20], 0
0x54888D: jnz     Calc_T3PotionStrength___def_548847
0x548893: fld     st
0x548895: fmul    [esp+0Ch+arg_18]
0x548899: fmul    dword ptr ds:0B37A40h
0x54889F: faddp   st(1), st
0x5488A1: fstp    dword ptr [esi]
0x5488A3: pop     esi
0x5488A4: add     esp, 8
0x5488A7: retn
0x5488A8: fld     st; jumptable 00548847 case 3
0x5488AA: fmul    [esp+0Ch+arg_1C]
0x5488AE: fmul    dword ptr ds:0B37A38h
0x5488B4: faddp   st(1), st
0x5488B6: fstp    dword ptr [esi]
0x5488B8: pop     esi
0x5488B9: add     esp, 8
0x5488BC: retn
0x5488BD: cmp     [esp+0Ch+arg_10], 0; jumptable 00548847 case 5
0x5488C2: jz      short loc_5488A8; jumptable 00548847 case 3
0x5488C4: cmp     [esp+0Ch+arg_20], 0
0x5488C9: jnz     short loc_5488A8; jumptable 00548847 case 3
0x5488CB: mov     ecx, offset fPotionT3AleMagMult
0x5488D0: fstp    st
0x5488D2: call    GameSetting_GetSafeFloatPointer
0x5488D7: fld     dword ptr [esi]
0x5488D9: fmul    [esp+0Ch+arg_18]
0x5488DD: mov     ecx, offset fPotionT3CalMagMult
0x5488E2: fmul    dword ptr [eax]
0x5488E4: fmul    [esp+0Ch+arg_1C]
0x5488E8: fstp    [esp+0Ch+var_8]
0x5488EC: call    GameSetting_GetSafeFloatPointer
0x5488F1: fld     dword ptr [eax]
0x5488F3: fmul    [esp+0Ch+var_8]
0x5488F7: fadd    dword ptr [esi]
0x5488F9: fstp    dword ptr [esi]
0x5488FB: pop     esi
0x5488FC: add     esp, 8
0x5488FF: retn
0x548900: cmp     [esp+0Ch+arg_10], 0; jumptable 00548847 case 4
0x548905: jnz     short loc_5488A8; jumptable 00548847 case 3
0x548907: cmp     [esp+0Ch+arg_20], 0
0x54890C: jnz     short loc_5488A8; jumptable 00548847 case 3
0x54890E: mov     ecx, offset fPotionT3RetMagMult
0x548913: fstp    st
0x548915: call    GameSetting_GetSafeFloatPointer
0x54891A: fld     dword ptr [esi]
0x54891C: fmul    [esp+0Ch+arg_14]
0x548920: mov     ecx, offset fPotionT3CalMagMult
0x548925: fmul    dword ptr [eax]
0x548927: fmul    [esp+0Ch+arg_1C]
0x54892B: fstp    [esp+0Ch+var_8]
0x54892F: call    GameSetting_GetSafeFloatPointer
0x548934: fld     dword ptr [eax]
0x548936: fmul    [esp+0Ch+var_8]
0x54893A: fadd    dword ptr [esi]
0x54893C: fstp    dword ptr [esi]
0x54893E: pop     esi
0x54893F: add     esp, 8
0x548942: retn
