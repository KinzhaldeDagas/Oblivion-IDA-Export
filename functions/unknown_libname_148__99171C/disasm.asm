0x99171C: push    edx
0x99171D: sub     esp, 30h
0x991720: fstp    [esp+34h+var_1C]
0x991724: fstp    [esp+34h+var_34]
0x991727: xor     edx, edx
0x991729: mov     eax, dword ptr [esp+34h+var_34+6]
0x99172D: test    eax, 7FFF0000h
0x991732: jz      short loc_99173E
0x991734: call    unknown_libname_147
0x991739: add     esp, 30h
0x99173C: pop     edx
0x99173D: retn
0x99173E: fld     [esp+34h+var_34]
0x991741: fld     [esp+34h+var_1C]
0x991745: mov     eax, dword ptr [esp+34h+var_34]
0x991748: or      eax, dword ptr [esp+34h+var_34+4]
0x99174C: jz      short loc_9917C7
0x99174E: fxch    st(1)
0x991750: fstp    [esp+34h+var_28]
0x991754: fld     [esp+34h+var_34]
0x991757: fxch    st(1)
0x991759: or      edx, 2
0x99175C: fnstcw  word ptr [esp+34h+var_10]
0x991760: mov     eax, [esp+34h+var_10]
0x991764: or      eax, 33Fh
0x991769: mov     [esp+34h+var_C], eax
0x99176D: fldcw   word ptr [esp+34h+var_C]
0x991771: mov     eax, dword ptr [esp+34h+var_1C+8]
0x991775: and     eax, 7FFFh
0x99177A: cmp     eax, 7FBEh
0x99177F: ja      short loc_991799
0x991781: or      edx, 1
0x991784: fmul    dbl_B31A14
0x99178A: fstp    [esp+34h+var_1C]
0x99178E: fmul    dbl_B31A14
0x991794: fstp    [esp+34h+var_34]
0x991797: jmp     short loc_9917B9
0x991799: fnstcw  word ptr [esp+34h+var_10]
0x99179D: mov     eax, [esp+34h+var_10]
0x9917A1: or      eax, 300h
0x9917A6: mov     [esp+34h+var_C], eax
0x9917AA: fldcw   word ptr [esp+34h+var_C]
0x9917AE: fstp    st
0x9917B0: fmul    dbl_B31A14
0x9917B6: fstp    [esp+34h+var_34]
0x9917B9: fldcw   word ptr [esp+34h+var_10]
0x9917BD: call    unknown_libname_147
0x9917C2: add     esp, 30h
0x9917C5: pop     edx
0x9917C6: retn
0x9917C7: fprem
0x9917C9: add     esp, 30h
0x9917CC: pop     edx
0x9917CD: retn
