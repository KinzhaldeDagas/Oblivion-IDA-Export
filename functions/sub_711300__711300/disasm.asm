0x711300: push    ecx
0x711301: push    esi
0x711302: mov     esi, ecx
0x711304: fld     dword ptr [esi+8]
0x711307: fstp    [esp+8+var_4]
0x71130B: fld     [esp+8+var_4]
0x71130F: fcom    qword ptr ds:0A3D360h
0x711315: fnstsw  ax
0x711317: test    ah, 41h
0x71131A: jnz     short loc_711340
0x71131C: fld1
0x71131E: fcomp   st(1)
0x711320: fnstsw  ax
0x711322: test    ah, 41h
0x711325: jnz     short loc_711336
0x711327: call    __CIasin
0x71132C: fstp    [esp+8+var_4]
0x711330: fld     [esp+8+var_4]
0x711334: jmp     short loc_71134A
0x711336: fstp    st
0x711338: fld     dword ptr ds:0B3F99Ch
0x71133E: jmp     short loc_71134A
0x711340: fstp    st
0x711342: fld     dword ptr ds:0B3F99Ch
0x711348: fchs
0x71134A: mov     eax, [esp+8+arg_4]
0x71134E: fstp    [esp+8+var_4]
0x711352: fld     [esp+8+var_4]
0x711356: sub     esp, 8
0x711359: fchs
0x71135B: fstp    [esp+10h+var_4]
0x71135F: fld     [esp+10h+var_4]
0x711363: fst     dword ptr [eax]
0x711365: fld     dword ptr ds:0B3F99Ch
0x71136B: fcom    st(1)
0x71136D: fnstsw  ax
0x71136F: test    ah, 41h
0x711372: jnz     loc_7113FC
0x711378: fchs
0x71137A: fcompp
0x71137C: fnstsw  ax
0x71137E: test    ah, 5
0x711381: jp      short loc_7113C4
0x711383: fld     dword ptr [esi+20h]
0x711386: fstp    [esp+10h+var_C]; float
0x71138A: fld     dword ptr [esi+14h]
0x71138D: fchs
0x71138F: fstp    [esp+10h+var_10]; float
0x711392: call    sub_7070B0
0x711397: mov     ecx, [esp+10h+arg_0]
0x71139B: fchs
0x71139D: fstp    dword ptr [ecx]
0x71139F: fld     dword ptr [esi]
0x7113A1: fstp    [esp+10h+var_C]; float
0x7113A5: fld     dword ptr [esi+4]
0x7113A8: fchs
0x7113AA: fstp    [esp+10h+var_10]; float
0x7113AD: call    sub_7070B0
0x7113B2: mov     edx, [esp+10h+arg_8]
0x7113B6: fchs
0x7113B8: add     esp, 8
0x7113BB: fstp    dword ptr [edx]
0x7113BD: mov     al, 1
0x7113BF: pop     esi
0x7113C0: pop     ecx
0x7113C1: retn    0Ch
0x7113C4: fld     dword ptr [esi+10h]
0x7113C7: fstp    [esp+10h+var_C]; float
0x7113CB: fld     dword ptr [esi+0Ch]
0x7113CE: fstp    [esp+10h+var_10]; float
0x7113D1: call    sub_7070B0
0x7113D6: mov     eax, [esp+10h+arg_8]
0x7113DA: fstp    [esp+10h+arg_4]
0x7113DE: fldz
0x7113E0: mov     ecx, [esp+10h+arg_0]
0x7113E4: fstp    dword ptr [eax]
0x7113E6: add     esp, 8
0x7113E9: fld     [esp+8+arg_4]
0x7113ED: xor     al, al
0x7113EF: fsub    qword ptr ds:0A2FC68h
0x7113F5: pop     esi
0x7113F6: fstp    dword ptr [ecx]
0x7113F8: pop     ecx
0x7113F9: retn    0Ch
0x7113FC: fstp    st(1)
0x7113FE: fstp    st
0x711400: fld     dword ptr [esi+10h]
0x711403: fstp    [esp+10h+var_C]; float
0x711407: fld     dword ptr [esi+0Ch]
0x71140A: fstp    [esp+10h+var_10]; float
0x71140D: call    sub_7070B0
0x711412: mov     edx, [esp+10h+arg_8]
0x711416: fstp    [esp+10h+arg_4]
0x71141A: fldz
0x71141C: mov     eax, [esp+10h+arg_0]
0x711420: fstp    dword ptr [edx]
0x711422: add     esp, 8
0x711425: fld     [esp+8+arg_4]
0x711429: pop     esi
0x71142A: fldz
0x71142C: fsubrp  st(1), st
0x71142E: fstp    dword ptr [eax]
0x711430: xor     al, al
0x711432: pop     ecx
0x711433: retn    0Ch
