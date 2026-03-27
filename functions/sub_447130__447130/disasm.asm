0x447130: push    esi
0x447131: lea     esi, [ecx+8C8h]
0x447137: test    esi, esi
0x447139: jz      short loc_447152
0x44713B: jmp     short loc_447140
0x44713D: align 10h
0x447140: mov     ecx, [esi]
0x447142: test    ecx, ecx
0x447144: jz      short loc_447152
0x447146: call    TESFile_Close
0x44714B: mov     esi, [esi+4]
0x44714E: test    esi, esi
0x447150: jnz     short loc_447140
0x447152: pop     esi
0x447153: retn
