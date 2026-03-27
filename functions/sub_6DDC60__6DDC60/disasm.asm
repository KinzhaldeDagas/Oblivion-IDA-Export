0x6DDC60: push    ebx
0x6DDC61: mov     ebx, [esp+4+arg_4]
0x6DDC65: push    esi
0x6DDC66: mov     esi, [esp+8+arg_0]
0x6DDC6A: push    edi
0x6DDC6B: push    ebx
0x6DDC6C: push    esi
0x6DDC6D: mov     edi, ecx
0x6DDC6F: call    sub_715D80
0x6DDC74: mov     ax, [edi+3Ch]
0x6DDC78: mov     [esi+3Ch], ax
0x6DDC7C: mov     ecx, [edi+48h]
0x6DDC7F: test    ecx, ecx
0x6DDC81: jz      short loc_6DDC93
0x6DDC83: mov     edx, [ecx]
0x6DDC85: mov     eax, [edx+18h]
0x6DDC88: push    ebx
0x6DDC89: call    eax
0x6DDC8B: push    eax
0x6DDC8C: mov     ecx, esi
0x6DDC8E: call    sub_6DC720
0x6DDC93: mov     ecx, [edi+4Ch]
0x6DDC96: test    ecx, ecx
0x6DDC98: jz      short loc_6DDCAA
0x6DDC9A: mov     edx, [ecx]
0x6DDC9C: mov     eax, [edx+18h]
0x6DDC9F: push    ebx
0x6DDCA0: call    eax
0x6DDCA2: push    eax
0x6DDCA3: mov     ecx, esi
0x6DDCA5: call    sub_71B140
0x6DDCAA: mov     cl, [edi+3Ch]
0x6DDCAD: shr     cl, 2
0x6DDCB0: test    cl, 1
0x6DDCB3: jz      short loc_6DDCBC
0x6DDCB5: or      word ptr [esi+3Ch], 4
0x6DDCBA: jmp     short loc_6DDCC2
0x6DDCBC: and     word ptr [esi+3Ch], 0FFFBh
0x6DDCC2: mov     dl, [edi+3Ch]
0x6DDCC5: shr     dl, 3
0x6DDCC8: test    dl, 1
0x6DDCCB: jz      short loc_6DDCD4
0x6DDCCD: or      word ptr [esi+3Ch], 8
0x6DDCD2: jmp     short loc_6DDCDA
0x6DDCD4: and     word ptr [esi+3Ch], 0FFF7h
0x6DDCDA: mov     eax, [edi+68h]
0x6DDCDD: mov     [esi+68h], eax
0x6DDCE0: mov     cl, [edi+3Ch]
0x6DDCE3: shr     cl, 4
0x6DDCE6: and     cl, 1
0x6DDCE9: jz      short loc_6DDD18
0x6DDCEB: or      word ptr [esi+3Ch], 10h
0x6DDCF0: test    byte ptr [esi+3Ch], 1
0x6DDCF4: jz      short loc_6DDD06
0x6DDCF6: mov     ecx, esi
0x6DDCF8: call    sub_6DD490
0x6DDCFD: fstp    dword ptr [esi+54h]
0x6DDD00: and     word ptr [esi+3Ch], 0FFFEh
0x6DDD06: mov     dl, [edi+3Ch]
0x6DDD09: shr     dl, 5
0x6DDD0C: test    dl, 1
0x6DDD0F: jz      short loc_6DDD20
0x6DDD11: or      word ptr [esi+3Ch], 20h
0x6DDD16: jmp     short loc_6DDD26
0x6DDD18: and     word ptr [esi+3Ch], 0FFEFh
0x6DDD1E: jmp     short loc_6DDD06
0x6DDD20: and     word ptr [esi+3Ch], 0FFDFh
0x6DDD26: fld     dword ptr [edi+58h]
0x6DDD29: fstp    dword ptr [esi+58h]
0x6DDD2C: fld     dword ptr [edi+5Ch]
0x6DDD2F: fstp    dword ptr [esi+5Ch]
0x6DDD32: mov     ax, [edi+60h]
0x6DDD36: mov     [esi+60h], ax
0x6DDD3A: mov     cl, [edi+3Ch]
0x6DDD3D: shr     cl, 6
0x6DDD40: test    cl, 1
0x6DDD43: jz      short loc_6DDD4C
0x6DDD45: or      word ptr [esi+3Ch], 40h
0x6DDD4A: jmp     short loc_6DDD52
0x6DDD4C: and     word ptr [esi+3Ch], 0FFBFh
0x6DDD52: mov     dl, [edi+3Ch]
0x6DDD55: shr     dl, 1
0x6DDD57: test    dl, 1
0x6DDD5A: jz      short loc_6DDD63
0x6DDD5C: or      word ptr [esi+3Ch], 2
0x6DDD61: jmp     short loc_6DDD69
0x6DDD63: and     word ptr [esi+3Ch], 0FFFDh
0x6DDD69: cmp     dword ptr [edi+50h], 0
0x6DDD6D: jz      short loc_6DDDAF
0x6DDD6F: mov     eax, [edi+48h]
0x6DDD72: test    eax, eax
0x6DDD74: push    ebp
0x6DDD75: jz      short loc_6DDD7C
0x6DDD77: mov     ebp, [eax+8]
0x6DDD7A: jmp     short loc_6DDD7E
0x6DDD7C: xor     ebp, ebp
0x6DDD7E: xor     ecx, ecx
0x6DDD80: mov     eax, ebp
0x6DDD82: mov     edx, 4
0x6DDD87: mul     edx
0x6DDD89: seto    cl
0x6DDD8C: neg     ecx
0x6DDD8E: or      ecx, eax
0x6DDD90: push    ecx; Size
0x6DDD91: call    FormHeapAlloc
0x6DDD96: lea     ecx, ds:0[ebp*4]
0x6DDD9D: mov     [esi+50h], eax
0x6DDDA0: mov     edx, [edi+50h]
0x6DDDA3: push    ecx; Size
0x6DDDA4: push    edx; Src
0x6DDDA5: push    eax; Dst
0x6DDDA6: call    _memcpy
0x6DDDAB: add     esp, 10h
0x6DDDAE: pop     ebp
0x6DDDAF: fld     dword ptr [edi+54h]
0x6DDDB2: pop     edi
0x6DDDB3: fstp    dword ptr [esi+54h]
0x6DDDB6: pop     esi
0x6DDDB7: pop     ebx
0x6DDDB8: retn    8
