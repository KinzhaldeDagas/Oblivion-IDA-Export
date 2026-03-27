0x4AEBE0: push    ecx
0x4AEBE1: mov     eax, [esp+4+arg_0]
0x4AEBE5: fldz
0x4AEBE7: lea     ecx, [eax-1]
0x4AEBEA: fst     [esp+4+var_4]
0x4AEBED: cmp     ecx, 13h
0x4AEBF0: ja      short loc_4AEC24
0x4AEBF2: shl     eax, 4
0x4AEBF5: mov     eax, [eax+0B07F44h]
0x4AEBFB: test    eax, eax
0x4AEBFD: jz      short loc_4AEC0D
0x4AEBFF: fstp    st
0x4AEC01: fld     dword ptr [eax]
0x4AEC03: fstp    [esp+4+var_4]
0x4AEC06: fld     [esp+4+var_4]
0x4AEC09: pop     ecx
0x4AEC0A: retn    4
0x4AEC0D: fstp    dword ptr ds:0B35464h
0x4AEC13: mov     eax, offset dword_B35464
0x4AEC18: fld     dword ptr [eax]
0x4AEC1A: fstp    [esp+4+var_4]
0x4AEC1D: fld     [esp+4+var_4]
0x4AEC20: pop     ecx
0x4AEC21: retn    4
0x4AEC24: fstp    st
0x4AEC26: fld     [esp+4+var_4]
0x4AEC29: pop     ecx
0x4AEC2A: retn    4
