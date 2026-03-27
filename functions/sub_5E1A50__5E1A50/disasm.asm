0x5E1A50: push    ebx
0x5E1A51: push    esi
0x5E1A52: mov     esi, ecx
0x5E1A54: xor     bl, bl
0x5E1A56: cmp     dword ptr [esi+58h], 0
0x5E1A5A: jz      short loc_5E1A7A
0x5E1A5C: mov     ecx, [esi+58h]
0x5E1A5F: mov     eax, [ecx]
0x5E1A61: mov     edx, [eax+8]
0x5E1A64: call    edx
0x5E1A66: test    eax, eax
0x5E1A68: jnz     short loc_5E1A7A
0x5E1A6A: mov     esi, [esi+58h]
0x5E1A6D: test    esi, esi
0x5E1A6F: jz      short loc_5E1A7A
0x5E1A71: mov     al, [esi+2A8h]
0x5E1A77: pop     esi
0x5E1A78: pop     ebx
0x5E1A79: retn
0x5E1A7A: pop     esi
0x5E1A7B: mov     al, bl
0x5E1A7D: pop     ebx
0x5E1A7E: retn
