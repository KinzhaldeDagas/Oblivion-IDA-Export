0x8BC180: push    ecx
0x8BC181: mov     eax, [esp+4+arg_4]
0x8BC185: sub     eax, 0
0x8BC188: push    ebx
0x8BC189: mov     ebx, [ecx+0Ch]
0x8BC18C: mov     [esp+8+var_4], ecx
0x8BC190: jz      short loc_8BC1AC
0x8BC192: dec     eax
0x8BC193: jz      short loc_8BC1A4
0x8BC195: dec     eax
0x8BC196: jnz     short loc_8BC1B0
0x8BC198: mov     eax, [ecx+8]
0x8BC19B: mov     ebx, [eax+4]
0x8BC19E: sub     ebx, [esp+8+arg_0]
0x8BC1A2: jmp     short loc_8BC1B0
0x8BC1A4: mov     edx, [esp+8+arg_0]
0x8BC1A8: add     ebx, edx
0x8BC1AA: jmp     short loc_8BC1B0
0x8BC1AC: mov     ebx, [esp+8+arg_0]
0x8BC1B0: test    ebx, ebx
0x8BC1B2: jl      short loc_8BC215
0x8BC1B4: push    edi
0x8BC1B5: mov     edi, [ecx+8]
0x8BC1B8: mov     eax, [edi+4]
0x8BC1BB: cmp     ebx, eax
0x8BC1BD: jle     short loc_8BC20A
0x8BC1BF: push    ebp
0x8BC1C0: push    esi
0x8BC1C1: lea     esi, [ebx+1]
0x8BC1C4: mov     ebp, eax
0x8BC1C6: cmp     esi, ebp
0x8BC1C8: jle     short loc_8BC1FF
0x8BC1CA: mov     eax, [edi+8]
0x8BC1CD: and     eax, 3FFFFFFFh
0x8BC1D2: cmp     eax, esi
0x8BC1D4: jge     short loc_8BC1EE
0x8BC1D6: add     eax, eax
0x8BC1D8: cmp     esi, eax
0x8BC1DA: jl      short loc_8BC1DE
0x8BC1DC: mov     eax, esi
0x8BC1DE: push    1
0x8BC1E0: push    eax
0x8BC1E1: push    edi
0x8BC1E2: call    sub_8A6E40
0x8BC1E7: mov     ecx, [esp+20h+var_4]
0x8BC1EB: add     esp, 0Ch
0x8BC1EE: cmp     ebp, esi
0x8BC1F0: mov     eax, ebp
0x8BC1F2: jge     short loc_8BC1FF
0x8BC1F4: mov     edx, [edi]
0x8BC1F6: mov     byte ptr [eax+edx], 0
0x8BC1FA: inc     eax
0x8BC1FB: cmp     eax, esi
0x8BC1FD: jl      short loc_8BC1F4
0x8BC1FF: mov     [edi+4], esi
0x8BC202: mov     eax, [ecx+8]
0x8BC205: pop     esi
0x8BC206: mov     [eax+4], ebx
0x8BC209: pop     ebp
0x8BC20A: pop     edi
0x8BC20B: mov     [ecx+0Ch], ebx
0x8BC20E: xor     eax, eax
0x8BC210: pop     ebx
0x8BC211: pop     ecx
0x8BC212: retn    8
0x8BC215: mov     eax, 1
0x8BC21A: pop     ebx
0x8BC21B: pop     ecx
0x8BC21C: retn    8
