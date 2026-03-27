0x5E1AF0: push    ebx
0x5E1AF1: push    esi
0x5E1AF2: mov     esi, ecx
0x5E1AF4: mov     eax, [esi]
0x5E1AF6: mov     edx, [eax+170h]
0x5E1AFC: push    edi
0x5E1AFD: xor     ebx, ebx
0x5E1AFF: call    edx
0x5E1B01: mov     edi, eax
0x5E1B03: test    edi, edi
0x5E1B05: jz      short loc_5E1B19
0x5E1B07: mov     eax, [esi]
0x5E1B09: mov     edx, [eax+190h]
0x5E1B0F: mov     ecx, esi
0x5E1B11: call    edx
0x5E1B13: test    al, al
0x5E1B15: jz      short loc_5E1B19
0x5E1B17: mov     ebx, edi
0x5E1B19: mov     eax, [ebx+24h]
0x5E1B1C: mov     edx, [eax+14h]
0x5E1B1F: lea     ecx, [ebx+24h]
0x5E1B22: pop     edi
0x5E1B23: pop     esi
0x5E1B24: pop     ebx
0x5E1B25: jmp     edx
