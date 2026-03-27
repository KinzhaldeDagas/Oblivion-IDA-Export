0x8E66D0: mov     eax, [esp+arg_0]
0x8E66D4: mov     edx, [esp+arg_4]
0x8E66D8: mov     ecx, [eax+28h]
0x8E66DB: push    esi
0x8E66DC: cmp     ecx, [edx+28h]
0x8E66DF: push    edi
0x8E66E0: jg      short loc_8E66E8
0x8E66E2: mov     ecx, eax
0x8E66E4: mov     edi, edx
0x8E66E6: jmp     short loc_8E66EC
0x8E66E8: mov     ecx, edx
0x8E66EA: mov     edi, eax
0x8E66EC: mov     esi, [ecx+28h]
0x8E66EF: xor     eax, eax
0x8E66F1: test    esi, esi
0x8E66F3: jle     short loc_8E670C
0x8E66F5: mov     ecx, [ecx+24h]
0x8E66F8: lea     edx, [ecx+4]
0x8E66FB: jmp     short loc_8E6700
0x8E66FD: align 10h
0x8E6700: cmp     [edx], edi
0x8E6702: jz      short loc_8E6711
0x8E6704: inc     eax
0x8E6705: add     edx, 8
0x8E6708: cmp     eax, esi
0x8E670A: jl      short loc_8E6700
0x8E670C: pop     edi
0x8E670D: pop     esi
0x8E670E: xor     eax, eax
0x8E6710: retn
0x8E6711: mov     eax, [ecx+eax*8]
0x8E6714: pop     edi
0x8E6715: pop     esi
0x8E6716: retn
