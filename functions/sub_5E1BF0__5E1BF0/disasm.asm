0x5E1BF0: push    ebx
0x5E1BF1: push    esi
0x5E1BF2: mov     esi, ecx
0x5E1BF4: mov     eax, [esi]
0x5E1BF6: mov     edx, [eax+170h]
0x5E1BFC: push    edi
0x5E1BFD: xor     ebx, ebx
0x5E1BFF: call    edx
0x5E1C01: mov     edi, eax
0x5E1C03: test    edi, edi
0x5E1C05: jz      short loc_5E1C19
0x5E1C07: mov     eax, [esi]
0x5E1C09: mov     edx, [eax+190h]
0x5E1C0F: mov     ecx, esi
0x5E1C11: call    edx
0x5E1C13: test    al, al
0x5E1C15: jz      short loc_5E1C19
0x5E1C17: mov     ebx, edi
0x5E1C19: mov     eax, [ebx+24h]
0x5E1C1C: mov     edx, [eax+40h]
0x5E1C1F: lea     ecx, [ebx+24h]
0x5E1C22: pop     edi
0x5E1C23: pop     esi
0x5E1C24: pop     ebx
0x5E1C25: jmp     edx
