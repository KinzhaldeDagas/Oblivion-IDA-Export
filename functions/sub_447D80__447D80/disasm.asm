0x447D80: push    esi
0x447D81: push    edi
0x447D82: mov     edi, ecx
0x447D84: lea     esi, [edi+64h]
0x447D87: test    esi, esi
0x447D89: jz      short loc_447DA4
0x447D8B: jmp     short loc_447D90
0x447D8D: align 10h
0x447D90: mov     ecx, [esi]
0x447D92: test    ecx, ecx
0x447D94: jz      short loc_447DA4
0x447D96: mov     eax, [ecx]
0x447D98: mov     edx, [eax+6Ch]
0x447D9B: call    edx
0x447D9D: mov     esi, [esi+4]
0x447DA0: test    esi, esi
0x447DA2: jnz     short loc_447D90
0x447DA4: mov     ecx, edi
0x447DA6: pop     edi
0x447DA7: pop     esi
0x447DA8: jmp     sub_447CA0
