0x89F3D0: push    ebx
0x89F3D1: mov     ebx, [esp+4+arg_0]
0x89F3D5: test    bl, bl
0x89F3D7: push    esi
0x89F3D8: mov     esi, ecx
0x89F3DA: jz      short loc_89F40B
0x89F3DC: test    esi, esi
0x89F3DE: jz      short loc_89F3F7
0x89F3E0: mov     eax, [esi+8]
0x89F3E3: test    eax, eax
0x89F3E5: jz      short loc_89F3F7
0x89F3E7: add     eax, 14h
0x89F3EA: jz      short loc_89F3F7
0x89F3EC: mov     eax, [eax]
0x89F3EE: test    eax, eax
0x89F3F0: jz      short loc_89F3F7
0x89F3F2: mov     eax, [eax+8]
0x89F3F5: jmp     short loc_89F3F9
0x89F3F7: xor     eax, eax
0x89F3F9: test    eax, eax
0x89F3FB: jz      short loc_89F407
0x89F3FD: add     eax, 4
0x89F400: push    eax; lpAddend
0x89F401: call    dword ptr ds:0A28078h
0x89F407: mov     ecx, esi
0x89F409: jmp     short loc_89F44B
0x89F40B: mov     eax, [esi]
0x89F40D: mov     edx, [eax+60h]
0x89F410: push    edi
0x89F411: call    edx
0x89F413: mov     eax, [esi+8]
0x89F416: test    eax, eax
0x89F418: jz      short loc_89F42A
0x89F41A: add     eax, 14h
0x89F41D: jz      short loc_89F42A
0x89F41F: mov     eax, [eax]
0x89F421: test    eax, eax
0x89F423: jz      short loc_89F42A
0x89F425: mov     edi, [eax+8]
0x89F428: jmp     short loc_89F42C
0x89F42A: xor     edi, edi
0x89F42C: test    edi, edi
0x89F42E: jz      short loc_89F448
0x89F430: lea     eax, [edi+4]
0x89F433: push    eax; lpAddend
0x89F434: call    dword ptr ds:0A2807Ch
0x89F43A: test    eax, eax
0x89F43C: jnz     short loc_89F448
0x89F43E: mov     edx, [edi]
0x89F440: mov     eax, [edx]
0x89F442: push    1
0x89F444: mov     ecx, edi
0x89F446: call    eax
0x89F448: xor     ecx, ecx
0x89F44A: pop     edi
0x89F44B: test    esi, esi
0x89F44D: jz      short loc_89F459
0x89F44F: mov     eax, [esi+8]
0x89F452: test    eax, eax
0x89F454: jz      short loc_89F459
0x89F456: mov     [eax+0Ch], ecx
0x89F459: push    ebx
0x89F45A: mov     ecx, esi
0x89F45C: call    sub_89D430
0x89F461: pop     esi
0x89F462: pop     ebx
0x89F463: retn    4
