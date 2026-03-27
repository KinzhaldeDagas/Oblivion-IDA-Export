0x91C100: push    edi
0x91C101: mov     edi, ecx
0x91C103: mov     eax, [edi+1Ch]
0x91C106: test    eax, eax
0x91C108: jz      short loc_91C133
0x91C10A: mov     ecx, [eax+60h]
0x91C10D: push    esi
0x91C10E: xor     esi, esi
0x91C110: test    ecx, ecx
0x91C112: jle     short loc_91C132
0x91C114: push    ebx
0x91C115: lea     ebx, [edi-8]
0x91C118: mov     eax, [eax+5Ch]
0x91C11B: mov     ecx, [eax+esi*4]
0x91C11E: push    ecx
0x91C11F: mov     ecx, ebx
0x91C121: call    sub_91BFB0
0x91C126: mov     eax, [edi+1Ch]
0x91C129: mov     ecx, [eax+60h]
0x91C12C: inc     esi
0x91C12D: cmp     esi, ecx
0x91C12F: jl      short loc_91C118
0x91C131: pop     ebx
0x91C132: pop     esi
0x91C133: pop     edi
0x91C134: retn
