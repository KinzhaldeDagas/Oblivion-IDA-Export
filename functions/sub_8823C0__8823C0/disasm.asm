0x8823C0: push    ecx
0x8823C1: fld     dword ptr [ecx+4]
0x8823C4: fmul    qword ptr ds:0A95AB0h
0x8823CA: fld     dword ptr [ecx]
0x8823CC: fmul    qword ptr ds:0A95AA8h
0x8823D2: faddp   st(1), st
0x8823D4: fld     dword ptr [ecx+8]
0x8823D7: fmul    qword ptr ds:0A95AA0h
0x8823DD: faddp   st(1), st
0x8823DF: fstp    [esp+4+var_4]
0x8823E2: fld     [esp+4+var_4]
0x8823E5: pop     ecx
0x8823E6: retn
