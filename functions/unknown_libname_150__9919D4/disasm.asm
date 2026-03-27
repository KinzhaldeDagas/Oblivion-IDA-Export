0x9919D4: push    edx
0x9919D5: sub     esp, 30h
0x9919D8: fstp    [esp+34h+var_1C]
0x9919DC: fstp    [esp+34h+var_34]
0x9919DF: mov     edx, 0
0x9919E4: mov     eax, dword ptr [esp+34h+var_34+6]
0x9919E8: test    eax, 7FFF0000h
0x9919ED: jz      short loc_9919F9
0x9919EF: call    unknown_libname_149
0x9919F4: add     esp, 30h
0x9919F7: pop     edx
0x9919F8: retn
0x9919F9: fld     [esp+34h+var_34]
0x9919FC: fld     [esp+34h+var_1C]
0x991A00: mov     eax, dword ptr [esp+34h+var_34]
0x991A03: or      eax, dword ptr [esp+34h+var_34+4]
0x991A07: jz      short loc_991A82
0x991A09: fxch    st(1)
0x991A0B: fstp    [esp+34h+var_28]
0x991A0F: fld     [esp+34h+var_34]
0x991A12: fxch    st(1)
0x991A14: or      edx, 2
0x991A17: fnstcw  word ptr [esp+34h+var_10]
0x991A1B: mov     eax, [esp+34h+var_10]
0x991A1F: or      eax, 33Fh
0x991A24: mov     [esp+34h+var_C], eax
0x991A28: fldcw   word ptr [esp+34h+var_C]
0x991A2C: mov     eax, dword ptr [esp+34h+var_1C+8]
0x991A30: and     eax, 7FFFh
0x991A35: cmp     eax, 7FBEh
0x991A3A: ja      short loc_991A54
0x991A3C: or      edx, 1
0x991A3F: fmul    dbl_B31A14
0x991A45: fstp    [esp+34h+var_1C]
0x991A49: fmul    dbl_B31A14
0x991A4F: fstp    [esp+34h+var_34]
0x991A52: jmp     short loc_991A74
0x991A54: fnstcw  word ptr [esp+34h+var_10]
0x991A58: mov     eax, [esp+34h+var_10]
0x991A5C: or      eax, 300h
0x991A61: mov     [esp+34h+var_C], eax
0x991A65: fldcw   word ptr [esp+34h+var_C]
0x991A69: fstp    st
0x991A6B: fmul    dbl_B31A14
0x991A71: fstp    [esp+34h+var_34]
0x991A74: fldcw   word ptr [esp+34h+var_10]
0x991A78: call    unknown_libname_149
0x991A7D: add     esp, 30h
0x991A80: pop     edx
0x991A81: retn
0x991A82: fprem
0x991A84: add     esp, 30h
0x991A87: pop     edx
0x991A88: retn
