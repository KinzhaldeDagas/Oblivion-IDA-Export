0x547D00: push    ecx
0x547D01: mov     eax, [esp+4+arg_10]
0x547D05: fld     [esp+4+arg_4]
0x547D09: mov     ecx, [esp+4+arg_8]
0x547D0D: mov     edx, [esp+4+arg_14]
0x547D11: push    eax
0x547D12: push    ecx
0x547D13: push    edx
0x547D14: sub     esp, 8
0x547D17: fstp    [esp+18h+var_14]
0x547D1B: fld     [esp+18h+arg_0]
0x547D1F: fstp    [esp+18h+var_18]
0x547D22: call    Calc_WalkSpeed
0x547D27: fadd    qword ptr ds:0A2FC68h
0x547D2D: fstp    [esp+18h+var_4]
0x547D31: fld     [esp+18h+var_4]
0x547D35: fld     dword ptr ds:0B373E0h
0x547D3B: fmul    [esp+18h+arg_C]
0x547D3F: fmul    qword ptr ds:0A3B150h
0x547D45: fadd    dword ptr ds:0B373E8h
0x547D4B: fmulp   st(1), st
0x547D4D: fstp    [esp+18h+arg_C]
0x547D51: fld     [esp+18h+arg_C]
0x547D55: add     esp, 18h
0x547D58: retn
