0x8CA1D0: push    ebx
0x8CA1D1: push    esi
0x8CA1D2: mov     esi, ecx
0x8CA1D4: mov     edx, [esi+28h]
0x8CA1D7: xor     ecx, ecx
0x8CA1D9: test    edx, edx
0x8CA1DB: push    edi
0x8CA1DC: jle     short loc_8CA249
0x8CA1DE: mov     eax, [esi+24h]
0x8CA1E1: mov     ebx, [esp+0Ch+arg_0]
0x8CA1E5: cmp     [eax], ebx
0x8CA1E7: jz      short loc_8CA1F7
0x8CA1E9: inc     ecx
0x8CA1EA: add     eax, 8
0x8CA1ED: cmp     ecx, edx
0x8CA1EF: jl      short loc_8CA1E5
0x8CA1F1: pop     edi
0x8CA1F2: pop     esi
0x8CA1F3: pop     ebx
0x8CA1F4: retn    4
0x8CA1F7: mov     edx, [esi+28h]
0x8CA1FA: mov     eax, [esi+24h]
0x8CA1FD: dec     edx
0x8CA1FE: mov     [esi+28h], edx
0x8CA201: mov     edi, [eax+edx*8]
0x8CA204: mov     [eax+ecx*8], edi
0x8CA207: mov     edx, [eax+edx*8+4]
0x8CA20B: mov     [eax+ecx*8+4], edx
0x8CA20F: mov     eax, [esi+34h]
0x8CA212: xor     edi, edi
0x8CA214: test    eax, eax
0x8CA216: jle     short loc_8CA249
0x8CA218: jmp     short loc_8CA220
0x8CA21A: align 10h
0x8CA220: mov     eax, [esi+3Ch]
0x8CA223: mov     edx, [eax+edi*4]
0x8CA226: lea     ecx, ds:0[edi*4]
0x8CA22D: push    edx
0x8CA22E: push    ecx
0x8CA22F: mov     eax, esp
0x8CA231: mov     byte ptr [eax], 0
0x8CA234: mov     eax, [esi+30h]
0x8CA237: push    0
0x8CA239: add     eax, ecx
0x8CA23B: push    ebx
0x8CA23C: call    dword ptr [eax]
0x8CA23E: mov     eax, [esi+34h]
0x8CA241: add     esp, 10h
0x8CA244: inc     edi
0x8CA245: cmp     edi, eax
0x8CA247: jl      short loc_8CA220
0x8CA249: pop     edi
0x8CA24A: pop     esi
0x8CA24B: pop     ebx
0x8CA24C: retn    4
