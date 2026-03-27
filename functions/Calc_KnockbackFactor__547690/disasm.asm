0x547690: sub     esp, 8
0x547693: mov     eax, [esp+8+arg_4]
0x547697: mov     ecx, [esp+8+arg_0]
0x54769B: push    eax
0x54769C: push    ecx
0x54769D: call    Calc_LuckModifiedSkill
0x5476A2: fstp    [esp+10h+var_8]
0x5476A6: fld     [esp+10h+arg_8]
0x5476AA: add     esp, 4
0x5476AD: fstp    [esp+0Ch+var_C]; float
0x5476B0: call    Calc_FatigueFactor
0x5476B5: fdivr   [esp+0Ch+var_8]
0x5476B9: fstp    dword ptr [esp+0Ch+var_8]
0x5476BD: fild    [esp+0Ch+arg_C]
0x5476C1: fmul    dword ptr ds:0B36FC0h
0x5476C7: fadd    dword ptr ds:0B36FB8h
0x5476CD: fstp    [esp+0Ch+arg_C]
0x5476D1: fld     [esp+0Ch+arg_C]
0x5476D5: fld     dword ptr ds:0B36FB0h
0x5476DB: fmul    dword ptr [esp+0Ch+var_8]
0x5476DF: fadd    dword ptr ds:0B36FA8h
0x5476E5: fstp    [esp+0Ch+arg_C]
0x5476E9: fmul    [esp+0Ch+arg_C]
0x5476ED: fstp    [esp+0Ch+arg_C]
0x5476F1: fld     [esp+0Ch+arg_C]
0x5476F5: add     esp, 0Ch
0x5476F8: retn
