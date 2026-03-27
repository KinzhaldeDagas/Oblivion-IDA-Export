0x4C8D80: push    esi
0x4C8D81: mov     esi, ecx
0x4C8D83: push    edi
0x4C8D84: mov     edi, [esi+24h]
0x4C8D87: test    edi, edi
0x4C8D89: jz      short loc_4C8DAE
0x4C8D8B: lea     eax, [edi+4]
0x4C8D8E: push    eax; lpAddend
0x4C8D8F: call    dword ptr ds:0A2807Ch
0x4C8D95: test    eax, eax
0x4C8D97: jnz     short loc_4C8DA7
0x4C8D99: test    edi, edi
0x4C8D9B: jz      short loc_4C8DA7
0x4C8D9D: mov     edx, [edi]
0x4C8D9F: mov     eax, [edx]
0x4C8DA1: push    1
0x4C8DA3: mov     ecx, edi
0x4C8DA5: call    eax
0x4C8DA7: mov     dword ptr [esi+24h], 0
0x4C8DAE: mov     al, 1Eh
0x4C8DB0: pop     edi
0x4C8DB1: mov     byte ptr [esi+28h], 2
0x4C8DB5: mov     [esi+29h], al
0x4C8DB8: mov     [esi+2Ah], al
0x4C8DBB: mov     [esi+2Bh], al
0x4C8DBE: mov     ecx, esi
0x4C8DC0: pop     esi
0x4C8DC1: jmp     j_TESForm_InitializeComponents
