0x8A6630: push    esi
0x8A6631: lea     esi, [ecx+94h]
0x8A6637: mov     ecx, [esi+4]
0x8A663A: xor     eax, eax
0x8A663C: test    ecx, ecx
0x8A663E: jle     short loc_8A664F
0x8A6640: mov     edx, [esi]
0x8A6642: cmp     dword ptr [edx], 0
0x8A6645: jz      short loc_8A6680
0x8A6647: inc     eax
0x8A6648: add     edx, 4
0x8A664B: cmp     eax, ecx
0x8A664D: jl      short loc_8A6642
0x8A664F: mov     eax, [esi+8]
0x8A6652: mov     ecx, [esi+4]
0x8A6655: and     eax, 3FFFFFFFh
0x8A665A: cmp     ecx, eax
0x8A665C: jnz     short loc_8A6669
0x8A665E: push    4
0x8A6660: push    esi
0x8A6661: call    sub_8A6EE0
0x8A6666: add     esp, 8
0x8A6669: mov     ecx, [esi+4]
0x8A666C: mov     edx, [esi]
0x8A666E: mov     eax, [esp+4+arg_0]
0x8A6672: mov     [edx+ecx*4], eax
0x8A6675: mov     eax, [esi+4]
0x8A6678: inc     eax
0x8A6679: mov     [esi+4], eax
0x8A667C: pop     esi
0x8A667D: retn    4
0x8A6680: test    eax, eax
0x8A6682: jl      short loc_8A664F
0x8A6684: mov     ecx, [esi]
0x8A6686: mov     edx, [esp+4+arg_0]
0x8A668A: mov     [ecx+eax*4], edx
0x8A668D: pop     esi
0x8A668E: retn    4
