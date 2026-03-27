0x548CD0: sub     esp, 8
0x548CD3: cmp     [esp+8+arg_4], 0
0x548CD8: jle     short loc_548CFA
0x548CDA: fld     [esp+8+arg_8]
0x548CDE: fidiv   [esp+8+arg_4]
0x548CE2: fstp    [esp+8+arg_4]
0x548CE6: fld     [esp+8+arg_4]
0x548CEA: fmul    st, st
0x548CEC: fstp    [esp+8+arg_4]
0x548CF0: fld     [esp+8+arg_4]
0x548CF4: fld1
0x548CF6: fsubrp  st(1), st
0x548CF8: jmp     short loc_548CFC
0x548CFA: fld1
0x548CFC: mov     eax, [esp+8+arg_10]
0x548D00: fstp    [esp+8+arg_4]
0x548D04: fld     dword ptr ds:0B37EA8h
0x548D0A: mov     ecx, [esp+8+arg_C]
0x548D0E: fmul    [esp+8+arg_4]
0x548D12: push    eax
0x548D13: push    ecx
0x548D14: fimul   [esp+10h+arg_0]
0x548D18: fadd    dword ptr ds:0B37EA0h
0x548D1E: fstp    [esp+10h+arg_4]
0x548D22: call    Calc_LuckModifiedSkill
0x548D27: fstp    [esp+10h+var_8]
0x548D2B: add     esp, 4
0x548D2E: fld     [esp+0Ch+arg_14]
0x548D32: fstp    [esp+0Ch+var_C]; float
0x548D35: call    Calc_FatigueFactor
0x548D3A: fmul    [esp+0Ch+var_8]
0x548D3E: fstp    [esp+0Ch+arg_0]
0x548D42: fld     [esp+0Ch+arg_4]
0x548D46: fld     dword ptr ds:0B37EB0h
0x548D4C: fmul    [esp+0Ch+arg_0]
0x548D50: fsubp   st(1), st
0x548D52: fstp    [esp+0Ch+arg_4]
0x548D56: fld     [esp+0Ch+arg_4]
0x548D5A: add     esp, 0Ch
0x548D5D: retn
