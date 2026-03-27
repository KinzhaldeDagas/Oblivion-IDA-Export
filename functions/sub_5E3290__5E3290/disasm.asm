0x5E3290: push    esi
0x5E3291: mov     esi, ecx
0x5E3293: mov     eax, [esi]
0x5E3295: mov     edx, [eax+170h]
0x5E329B: call    edx
0x5E329D: cmp     byte ptr [eax+4], 24h ; '$'
0x5E32A1: jnz     short loc_5E32C0
0x5E32A3: mov     eax, [esi]
0x5E32A5: mov     edx, [eax+170h]
0x5E32AB: mov     ecx, esi
0x5E32AD: call    edx
0x5E32AF: test    eax, eax
0x5E32B1: jz      short loc_5E32C0
0x5E32B3: cmp     byte ptr [eax+104h], 4
0x5E32BA: jnz     short loc_5E32C0
0x5E32BC: mov     al, 1
0x5E32BE: pop     esi
0x5E32BF: retn
0x5E32C0: xor     al, al
0x5E32C2: pop     esi
0x5E32C3: retn
