0x89E110: push    esi
0x89E111: push    edi
0x89E112: mov     edi, ecx
0x89E114: test    edi, edi
0x89E116: jz      short loc_89E124
0x89E118: mov     eax, [edi+8]
0x89E11B: test    eax, eax
0x89E11D: jz      short loc_89E124
0x89E11F: mov     eax, [eax+18h]
0x89E122: jmp     short loc_89E126
0x89E124: xor     eax, eax
0x89E126: test    eax, eax
0x89E128: jz      short loc_89E12F
0x89E12A: mov     eax, [eax+0Ch]
0x89E12D: jmp     short loc_89E131
0x89E12F: xor     eax, eax
0x89E131: mov     esi, [esp+8+arg_0]
0x89E135: mov     edx, [esi]
0x89E137: push    eax
0x89E138: mov     eax, [edx+2Ch]
0x89E13B: mov     ecx, esi
0x89E13D: call    eax
0x89E13F: push    esi
0x89E140: mov     ecx, edi
0x89E142: call    sub_89D7B0
0x89E147: pop     edi
0x89E148: pop     esi
0x89E149: retn    4
