0x6DF190: fld     dword ptr ds:0A7DEB4h
0x6DF196: push    ebx
0x6DF197: mov     ebx, [esp+4+arg_0]
0x6DF19B: fstp    dword ptr [ebx]
0x6DF19D: push    ebp
0x6DF19E: fld     dword ptr ds:0A7DEB4h
0x6DF1A4: mov     ebp, [esp+8+arg_4]
0x6DF1A8: push    esi
0x6DF1A9: fchs
0x6DF1AB: push    edi
0x6DF1AC: fstp    dword ptr [ebp+0]
0x6DF1AF: lea     esi, [ecx+38h]
0x6DF1B2: mov     edi, 3
0x6DF1B7: mov     ecx, [esi]
0x6DF1B9: test    ecx, ecx
0x6DF1BB: jz      short loc_6DF210
0x6DF1BD: mov     eax, [ecx]
0x6DF1BF: mov     eax, [eax+80h]
0x6DF1C5: lea     edx, [esp+10h+arg_4]
0x6DF1C9: push    edx
0x6DF1CA: lea     edx, [esp+14h+arg_0]
0x6DF1CE: push    edx
0x6DF1CF: call    eax
0x6DF1D1: fld     [esp+10h+arg_0]
0x6DF1D5: fld     st
0x6DF1D7: fld     [esp+10h+arg_4]
0x6DF1DB: fld     st
0x6DF1DD: fucomp  st(2)
0x6DF1DF: fnstsw  ax
0x6DF1E1: fstp    st(1)
0x6DF1E3: test    ah, 44h
0x6DF1E6: jnp     short loc_6DF20C
0x6DF1E8: fld     dword ptr [ebx]
0x6DF1EA: fcomp   st(2)
0x6DF1EC: fnstsw  ax
0x6DF1EE: test    ah, 41h
0x6DF1F1: jnz     short loc_6DF1F9
0x6DF1F3: fxch    st(1)
0x6DF1F5: fstp    dword ptr [ebx]
0x6DF1F7: jmp     short loc_6DF1FB
0x6DF1F9: fstp    st(1)
0x6DF1FB: fld     dword ptr [ebp+0]
0x6DF1FE: fcomp   st(1)
0x6DF200: fnstsw  ax
0x6DF202: test    ah, 5
0x6DF205: jp      short loc_6DF20E
0x6DF207: fstp    dword ptr [ebp+0]
0x6DF20A: jmp     short loc_6DF210
0x6DF20C: fstp    st(1)
0x6DF20E: fstp    st
0x6DF210: add     esi, 4
0x6DF213: sub     edi, 1
0x6DF216: jnz     short loc_6DF1B7
0x6DF218: fld     dword ptr [ebx]
0x6DF21A: fld     dword ptr ds:0A7DEB4h
0x6DF220: fld     st
0x6DF222: fucomp  st(2)
0x6DF224: fnstsw  ax
0x6DF226: fstp    st(1)
0x6DF228: test    ah, 44h
0x6DF22B: jp      short loc_6DF24B
0x6DF22D: fld     dword ptr [ebp+0]
0x6DF230: fxch    st(1)
0x6DF232: fchs
0x6DF234: fucompp
0x6DF236: fnstsw  ax
0x6DF238: test    ah, 44h
0x6DF23B: jp      short loc_6DF24D
0x6DF23D: fldz
0x6DF23F: pop     edi
0x6DF240: fst     dword ptr [ebx]
0x6DF242: pop     esi
0x6DF243: fstp    dword ptr [ebp+0]
0x6DF246: pop     ebp
0x6DF247: pop     ebx
0x6DF248: retn    8
0x6DF24B: fstp    st
0x6DF24D: pop     edi
0x6DF24E: pop     esi
0x6DF24F: pop     ebp
0x6DF250: pop     ebx
0x6DF251: retn    8
