0x7B23C0: mov     eax, [esp+arg_4]
0x7B23C4: push    ebx
0x7B23C5: mov     ebx, [esp+4+arg_0]
0x7B23C9: push    esi
0x7B23CA: push    edi
0x7B23CB: push    eax
0x7B23CC: push    ebx
0x7B23CD: mov     esi, ecx
0x7B23CF: call    sub_7ECB10
0x7B23D4: mov     edi, [ebx+0A0h]
0x7B23DA: cmp     edi, [esi+0A0h]
0x7B23E0: jz      short loc_7B241C
0x7B23E2: test    edi, edi
0x7B23E4: jz      short loc_7B2402
0x7B23E6: lea     ecx, [edi+4]
0x7B23E9: push    ecx; lpAddend
0x7B23EA: call    dword ptr ds:0A2807Ch
0x7B23F0: test    eax, eax
0x7B23F2: jnz     short loc_7B2402
0x7B23F4: test    edi, edi
0x7B23F6: jz      short loc_7B2402
0x7B23F8: mov     edx, [edi]
0x7B23FA: mov     eax, [edx]
0x7B23FC: push    1
0x7B23FE: mov     ecx, edi
0x7B2400: call    eax
0x7B2402: mov     eax, [esi+0A0h]
0x7B2408: test    eax, eax
0x7B240A: mov     [ebx+0A0h], eax
0x7B2410: jz      short loc_7B241C
0x7B2412: add     eax, 4
0x7B2415: push    eax; lpAddend
0x7B2416: call    dword ptr ds:0A28078h
0x7B241C: mov     ecx, [esi+0A4h]
0x7B2422: mov     [ebx+0A4h], ecx
0x7B2428: mov     edx, [esi+0A8h]
0x7B242E: mov     [ebx+0A8h], edx
0x7B2434: mov     eax, [esi+9Ch]
0x7B243A: pop     edi
0x7B243B: pop     esi
0x7B243C: mov     [ebx+9Ch], eax
0x7B2442: pop     ebx
0x7B2443: retn    8
