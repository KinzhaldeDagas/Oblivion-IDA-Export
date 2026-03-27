0x89F390: push    esi
0x89F391: push    edi
0x89F392: mov     edi, ecx
0x89F394: test    edi, edi
0x89F396: jz      short loc_89F3AF
0x89F398: mov     eax, [edi+8]
0x89F39B: test    eax, eax
0x89F39D: jz      short loc_89F3AF
0x89F39F: add     eax, 14h
0x89F3A2: jz      short loc_89F3AF
0x89F3A4: mov     eax, [eax]
0x89F3A6: test    eax, eax
0x89F3A8: jz      short loc_89F3AF
0x89F3AA: mov     ecx, [eax+8]
0x89F3AD: jmp     short loc_89F3B1
0x89F3AF: xor     ecx, ecx
0x89F3B1: test    ecx, ecx
0x89F3B3: mov     esi, [esp+8+arg_0]
0x89F3B7: jz      short loc_89F3C1
0x89F3B9: mov     eax, [ecx]
0x89F3BB: mov     edx, [eax+24h]
0x89F3BE: push    esi
0x89F3BF: call    edx
0x89F3C1: push    esi
0x89F3C2: mov     ecx, edi
0x89F3C4: call    sub_6E7270
0x89F3C9: pop     edi
0x89F3CA: pop     esi
0x89F3CB: retn    4
