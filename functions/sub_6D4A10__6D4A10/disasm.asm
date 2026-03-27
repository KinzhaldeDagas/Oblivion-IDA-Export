0x6D4A10: push    ebx
0x6D4A11: push    esi
0x6D4A12: mov     esi, ecx
0x6D4A14: mov     eax, [esi+0Ch]
0x6D4A17: xor     ebx, ebx
0x6D4A19: cmp     eax, ebx
0x6D4A1B: jz      short loc_6D4A2D
0x6D4A1D: mov     ecx, [esi+10h]
0x6D4A20: mov     edx, ds:0B3D2C8h[ecx*4]
0x6D4A27: push    eax
0x6D4A28: call    edx ; dword_B3D2C8
0x6D4A2A: add     esp, 4
0x6D4A2D: mov     ecx, [esp+8+arg_0]
0x6D4A31: cmp     ecx, ebx
0x6D4A33: jz      short loc_6D4A58
0x6D4A35: mov     eax, [esp+8+arg_4]
0x6D4A39: cmp     eax, ebx
0x6D4A3B: jz      short loc_6D4A58
0x6D4A3D: mov     [esi+8], eax
0x6D4A40: mov     eax, [esp+8+arg_8]
0x6D4A44: mov     [esi+0Ch], ecx
0x6D4A47: mov     [esi+10h], eax
0x6D4A4A: mov     al, ds:byte_B3D3E8[eax]
0x6D4A50: mov     [esi+48h], al
0x6D4A53: pop     esi
0x6D4A54: pop     ebx
0x6D4A55: retn    0Ch
0x6D4A58: mov     [esi+8], ebx
0x6D4A5B: mov     [esi+0Ch], ebx
0x6D4A5E: mov     [esi+10h], ebx
0x6D4A61: mov     [esi+48h], bl
0x6D4A64: pop     esi
0x6D4A65: pop     ebx
0x6D4A66: retn    0Ch
