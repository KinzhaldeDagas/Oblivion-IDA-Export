0x548C00: push    ecx
0x548C01: mov     eax, [esp+4+arg_8]
0x548C05: mov     ecx, [esp+4+arg_4]
0x548C09: push    eax
0x548C0A: push    ecx
0x548C0B: call    Calc_LuckModifiedSkill
0x548C10: fdiv    qword ptr ds:0A309F0h
0x548C16: fstp    [esp+0Ch+var_4]
0x548C1A: fld     [esp+0Ch+var_4]
0x548C1E: fld1
0x548C20: fsubrp  st(1), st
0x548C22: fmul    dword ptr ds:0B37DF0h
0x548C28: fadd    dword ptr ds:0B37DE8h
0x548C2E: fstp    [esp+0Ch+var_4]
0x548C32: fld     [esp+0Ch+var_4]
0x548C36: fmul    [esp+0Ch+arg_0]
0x548C3A: fstp    [esp+0Ch+arg_0]
0x548C3E: fld     [esp+0Ch+arg_0]
0x548C42: add     esp, 0Ch
0x548C45: retn
