0x547070: sub     esp, 8
0x547073: mov     eax, [esp+8+arg_4]
0x547077: mov     ecx, [esp+8+arg_0]
0x54707B: push    eax
0x54707C: push    ecx
0x54707D: call    Calc_LuckModifiedSkill
0x547082: fstp    [esp+10h+var_8]
0x547086: fild    [esp+10h+arg_10]
0x54708A: mov     eax, [esp+10h+arg_8]
0x54708E: add     esp, 8
0x547091: cmp     eax, 64h ; 'd'
0x547094: fmul    dword ptr ds:0B36DD8h
0x54709A: mov     [esp+8+arg_10], eax
0x54709E: fstp    [esp+8+var_4]
0x5470A2: fld     dword ptr ds:0B36DF8h
0x5470A8: fmul    [esp+8+arg_14]
0x5470AC: fadd    dword ptr ds:0B36DF0h
0x5470B2: fstp    [esp+8+arg_14]
0x5470B6: fld     [esp+8+var_8]
0x5470B9: fld     qword ptr ds:0A3B150h
0x5470BF: fmul    st(1), st
0x5470C1: fld     dword ptr ds:0B36DE8h
0x5470C7: fmulp   st(2), st
0x5470C9: fld     dword ptr ds:0B36DE0h
0x5470CF: faddp   st(2), st
0x5470D1: fxch    st(1)
0x5470D3: fstp    [esp+8+var_8]
0x5470D6: jl      short loc_5470E0
0x5470D8: mov     [esp+8+arg_10], 64h ; 'd'
0x5470E0: cmp     byte ptr [esp+8+arg_1C], 0
0x5470E5: fimul   [esp+8+arg_10]
0x5470E9: fmul    dword ptr ds:0B36E08h
0x5470EF: fadd    dword ptr ds:0B36E00h
0x5470F5: fstp    [esp+8+arg_10]
0x5470F9: jz      short loc_5470FF
0x5470FB: fld1
0x5470FD: jmp     short loc_54710F
0x5470FF: fld     [esp+8+arg_C]
0x547103: push    ecx
0x547104: fstp    [esp+0Ch+var_C]; float
0x547107: call    Calc_FatigueFactor
0x54710C: add     esp, 4
0x54710F: fstp    [esp+8+arg_1C]
0x547113: fld     [esp+8+arg_14]
0x547117: fmul    [esp+8+var_4]
0x54711B: fmul    [esp+8+var_8]
0x54711E: fmul    [esp+8+arg_10]
0x547122: fmul    [esp+8+arg_1C]
0x547126: fstp    [esp+8+arg_1C]
0x54712A: fld     [esp+8+arg_1C]
0x54712E: fmul    [esp+8+arg_18]
0x547132: fstp    [esp+8+arg_1C]
0x547136: fld     [esp+8+arg_1C]
0x54713A: add     esp, 8
0x54713D: retn
