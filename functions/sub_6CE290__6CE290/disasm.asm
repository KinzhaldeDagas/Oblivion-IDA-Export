0x6CE290: push    esi
0x6CE291: mov     esi, ecx
0x6CE293: mov     al, [esi+8]
0x6CE296: shr     al, 5
0x6CE299: test    al, 1
0x6CE29B: jnz     short loc_6CE2BB
0x6CE29D: call    sub_6D0510
0x6CE2A2: mov     ecx, [esi+3Ch]
0x6CE2A5: test    ecx, ecx
0x6CE2A7: jz      short loc_6CE2BB
0x6CE2A9: mov     edx, [ecx]
0x6CE2AB: mov     edx, [edx+80h]
0x6CE2B1: lea     eax, [esi+18h]
0x6CE2B4: push    eax
0x6CE2B5: add     esi, 14h
0x6CE2B8: push    esi
0x6CE2B9: call    edx
0x6CE2BB: pop     esi
0x6CE2BC: retn
