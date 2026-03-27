0x6D4B30: push    ebx
0x6D4B31: push    esi
0x6D4B32: mov     esi, ecx
0x6D4B34: mov     eax, [esi+30h]
0x6D4B37: xor     ebx, ebx
0x6D4B39: cmp     eax, ebx
0x6D4B3B: jz      short loc_6D4B4D
0x6D4B3D: mov     ecx, [esi+34h]
0x6D4B40: mov     edx, ds:0B3D2C8h[ecx*4]
0x6D4B47: push    eax
0x6D4B48: call    edx ; dword_B3D2C8
0x6D4B4A: add     esp, 4
0x6D4B4D: mov     ecx, [esp+8+arg_0]
0x6D4B51: cmp     ecx, ebx
0x6D4B53: jz      short loc_6D4B78
0x6D4B55: mov     eax, [esp+8+arg_4]
0x6D4B59: cmp     eax, ebx
0x6D4B5B: jz      short loc_6D4B78
0x6D4B5D: mov     [esi+2Ch], eax
0x6D4B60: mov     eax, [esp+8+arg_8]
0x6D4B64: mov     [esi+30h], ecx
0x6D4B67: mov     [esi+34h], eax
0x6D4B6A: mov     al, ds:byte_B3D3E8[eax]
0x6D4B70: mov     [esi+4Bh], al
0x6D4B73: pop     esi
0x6D4B74: pop     ebx
0x6D4B75: retn    0Ch
0x6D4B78: mov     [esi+2Ch], ebx
0x6D4B7B: mov     [esi+30h], ebx
0x6D4B7E: mov     [esi+34h], ebx
0x6D4B81: mov     [esi+4Bh], bl
0x6D4B84: pop     esi
0x6D4B85: pop     ebx
0x6D4B86: retn    0Ch
