0x6160B0: sub     esp, 10h
0x6160B3: push    esi
0x6160B4: mov     esi, ecx
0x6160B6: mov     ecx, [esi+3Ch]
0x6160B9: push    0Fh
0x6160BB: call    sub_5E05F0
0x6160C0: mov     eax, [esi+3Ch]
0x6160C3: mov     ecx, [eax+58h]
0x6160C6: mov     edx, [ecx]
0x6160C8: mov     eax, [edx+2C4h]
0x6160CE: push    0
0x6160D0: push    200h
0x6160D5: call    eax
0x6160D7: mov     ecx, [esi+3Ch]
0x6160DA: mov     ecx, [ecx+58h]
0x6160DD: mov     edx, [ecx]
0x6160DF: mov     eax, [edx+2C4h]
0x6160E5: push    0
0x6160E7: push    100h
0x6160EC: call    eax
0x6160EE: cmp     byte ptr ds:0B333B8h, 0
0x6160F5: jnz     loc_61618A
0x6160FB: mov     ecx, [esi+3Ch]
0x6160FE: mov     edx, [ecx]
0x616100: mov     eax, [edx+174h]
0x616106: call    eax
0x616108: fld     dword ptr [esi+198h]
0x61610E: fsub    dword ptr [eax]
0x616110: fstp    [esp+14h+var_C]
0x616114: fld     dword ptr [esi+19Ch]
0x61611A: fsub    dword ptr [eax+4]
0x61611D: fstp    [esp+14h+var_8]
0x616121: fld     dword ptr [esi+1A0h]
0x616127: fsub    dword ptr [eax+8]
0x61612A: fstp    [esp+14h+var_4]
0x61612E: fld     [esp+14h+var_C]
0x616132: fld     [esp+14h+var_8]
0x616136: fld     [esp+14h+var_4]
0x61613A: fld     dword ptr ds:0B372C8h
0x616140: fld     st(2)
0x616142: fmulp   st(3), st
0x616144: fld     st(3)
0x616146: fmulp   st(4), st
0x616148: fxch    st(2)
0x61614A: faddp   st(3), st
0x61614C: fmul    st, st
0x61614E: faddp   st(2), st
0x616150: fxch    st(1)
0x616152: fstp    [esp+14h+var_10]
0x616156: fld     [esp+14h+var_10]
0x61615A: fld     st(1)
0x61615C: fmulp   st(2), st
0x61615E: fcompp
0x616160: fnstsw  ax
0x616162: test    ah, 1
0x616165: jnz     short loc_61618A
0x616167: mov     eax, [esi+6Ch]
0x61616A: cmp     eax, 4
0x61616D: jz      short loc_61618A
0x61616F: cmp     eax, 7
0x616172: jz      short loc_61618A
0x616174: cmp     eax, 9
0x616177: jz      short loc_61618A
0x616179: cmp     eax, 8
0x61617C: jz      short loc_61618A
0x61617E: cmp     eax, 0Ch
0x616181: jz      short loc_61618A
0x616183: mov     byte ptr [esi+191h], 1
0x61618A: pop     esi
0x61618B: add     esp, 10h
0x61618E: retn
