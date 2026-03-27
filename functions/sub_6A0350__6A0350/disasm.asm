0x6A0350: mov     eax, [ecx+18h]
0x6A0353: sub     esp, 8
0x6A0356: test    eax, eax
0x6A0358: jz      short loc_6A0373
0x6A035A: fld     dword ptr [eax+18h]
0x6A035D: fcomp   qword ptr ds:0A309F0h
0x6A0363: fnstsw  ax
0x6A0365: test    ah, 1
0x6A0368: jnz     short loc_6A0373
0x6A036A: cmp     dword ptr [ecx+2Ch], 574E5352h
0x6A0371: jz      short loc_6A03F2
0x6A0373: fldz
0x6A0375: mov     edx, [ecx+48h]
0x6A0378: test    edx, edx
0x6A037A: fst     [esp+8+var_8]
0x6A037D: jz      short loc_6A03A5
0x6A037F: fld     dword ptr [edx+38h]
0x6A0382: fstp    [esp+8+var_8]
0x6A0385: fld     dword ptr [edx+48h]
0x6A0388: fstp    [esp+8+var_4]
0x6A038C: fld     [esp+8+var_8]
0x6A038F: fld     [esp+8+var_4]
0x6A0393: fcom    st(1)
0x6A0395: fnstsw  ax
0x6A0397: test    ah, 5
0x6A039A: jp      short loc_6A03A0
0x6A039C: fstp    st
0x6A039E: jmp     short loc_6A03A2
0x6A03A0: fstp    st(1)
0x6A03A2: fstp    [esp+8+var_8]
0x6A03A5: cmp     byte ptr [ecx+28h], 0
0x6A03A9: jz      short loc_6A03B9
0x6A03AB: fst     [esp+8+var_8]
0x6A03AE: fst     dword ptr [edx+38h]
0x6A03B1: mov     eax, [ecx+48h]
0x6A03B4: fstp    dword ptr [eax+48h]
0x6A03B7: jmp     short loc_6A03BB
0x6A03B9: fstp    st
0x6A03BB: mov     edx, [ecx+34h]
0x6A03BE: fld     [esp+8+var_8]
0x6A03C1: fld     dword ptr [edx+6Ch]
0x6A03C4: fcomp   st(1)
0x6A03C6: fnstsw  ax
0x6A03C8: test    ah, 41h
0x6A03CB: jnz     short loc_6A03D5
0x6A03CD: fdiv    dword ptr [edx+6Ch]
0x6A03D0: fmul    dword ptr [edx+2Ch]
0x6A03D3: jmp     short loc_6A03DA
0x6A03D5: fstp    st
0x6A03D7: fld     dword ptr [edx+2Ch]
0x6A03DA: mov     eax, [ecx+3Ch]
0x6A03DD: fstp    dword ptr [ecx+38h]
0x6A03E0: test    eax, eax
0x6A03E2: jz      short loc_6A03F2
0x6A03E4: fld     dword ptr [ecx+38h]
0x6A03E7: push    ecx
0x6A03E8: mov     ecx, eax
0x6A03EA: fstp    [esp+0Ch+var_C]; float
0x6A03ED: call    sub_7E4700
0x6A03F2: add     esp, 8
0x6A03F5: retn
