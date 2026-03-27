0x95E000: sub     esp, 0Ch
0x95E003: mov     ecx, [esp+0Ch+arg_4]
0x95E007: push    esi
0x95E008: mov     esi, [esp+10h+arg_C]
0x95E00C: fld     dword ptr [esi+8]
0x95E00F: fmul    dword ptr [ecx+8]
0x95E012: fld     dword ptr [ecx+4]
0x95E015: fmul    dword ptr [esi+4]
0x95E018: faddp   st(1), st
0x95E01A: fld     dword ptr [esi+0Ch]
0x95E01D: fmul    dword ptr [ecx+0Ch]
0x95E020: faddp   st(1), st
0x95E022: fstp    [esp+10h+arg_4]
0x95E026: fld     [esp+10h+arg_4]
0x95E02A: fcomp   qword ptr ds:0AA3A10h
0x95E030: fnstsw  ax
0x95E032: test    ah, 41h
0x95E035: jnz     short loc_95E03E
0x95E037: mov     al, 1
0x95E039: pop     esi
0x95E03A: add     esp, 0Ch
0x95E03D: retn
0x95E03E: fld     dword ptr [ecx+10h]
0x95E041: fld     dword ptr [esi+10h]
0x95E044: fchs
0x95E046: fcompp
0x95E048: fnstsw  ax
0x95E04A: test    ah, 1
0x95E04D: jz      short loc_95E037
0x95E04F: mov     eax, [esp+10h+arg_10]
0x95E053: mov     edx, [esp+10h+arg_8]
0x95E057: fld     dword ptr [eax]
0x95E059: fsub    dword ptr [edx]
0x95E05B: fstp    [esp+10h+var_C]
0x95E05F: fld     dword ptr [eax+4]
0x95E062: fsub    dword ptr [edx+4]
0x95E065: fstp    [esp+10h+var_8]
0x95E069: fld     dword ptr [eax+8]
0x95E06C: fsub    dword ptr [edx+8]
0x95E06F: fstp    [esp+10h+var_4]
0x95E073: fld     dword ptr [ecx+4]
0x95E076: fmul    [esp+10h+var_C]
0x95E07A: fld     dword ptr [ecx+8]
0x95E07D: fmul    [esp+10h+var_8]
0x95E081: faddp   st(1), st
0x95E083: fld     dword ptr [ecx+0Ch]
0x95E086: fmul    [esp+10h+var_4]
0x95E08A: faddp   st(1), st
0x95E08C: fstp    [esp+10h+arg_4]
0x95E090: fldz
0x95E092: fld     [esp+10h+arg_4]
0x95E096: fcom    st(1)
0x95E098: fnstsw  ax
0x95E09A: fstp    st(1)
0x95E09C: test    ah, 41h
0x95E09F: jp      short loc_95E0AA
0x95E0A1: fstp    st
0x95E0A3: xor     al, al
0x95E0A5: pop     esi
0x95E0A6: add     esp, 0Ch
0x95E0A9: retn
0x95E0AA: fld     dword ptr [ecx+10h]
0x95E0AD: fld     [esp+10h+arg_0]
0x95E0B1: fmulp   st(2), st
0x95E0B3: fld     dword ptr [esi+10h]
0x95E0B6: fsubp   st(2), st
0x95E0B8: fcompp
0x95E0BA: fnstsw  ax
0x95E0BC: test    ah, 41h
0x95E0BF: jp      short loc_95E0CB
0x95E0C1: mov     eax, 1
0x95E0C6: pop     esi
0x95E0C7: add     esp, 0Ch
0x95E0CA: retn
0x95E0CB: xor     eax, eax
0x95E0CD: pop     esi
0x95E0CE: add     esp, 0Ch
0x95E0D1: retn
