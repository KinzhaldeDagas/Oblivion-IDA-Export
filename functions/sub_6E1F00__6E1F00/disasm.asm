0x6E1F00: push    ebx
0x6E1F01: push    esi
0x6E1F02: mov     esi, ecx
0x6E1F04: mov     eax, [esi+24h]
0x6E1F07: xor     ebx, ebx
0x6E1F09: cmp     eax, ebx
0x6E1F0B: jz      short loc_6E1F1D
0x6E1F0D: mov     ecx, [esi+14h]
0x6E1F10: mov     edx, ds:0B3D2E0h[ecx*4]
0x6E1F17: push    eax
0x6E1F18: call    edx ; dword_B3D2E0
0x6E1F1A: add     esp, 4
0x6E1F1D: mov     ecx, [esp+8+arg_0]
0x6E1F21: cmp     ecx, ebx
0x6E1F23: jz      short loc_6E1F49
0x6E1F25: mov     eax, [esp+8+arg_4]
0x6E1F29: cmp     eax, ebx
0x6E1F2B: jz      short loc_6E1F49
0x6E1F2D: mov     [esi+0Ah], ax
0x6E1F31: mov     eax, [esp+8+arg_8]
0x6E1F35: mov     [esi+24h], ecx
0x6E1F38: mov     [esi+14h], eax
0x6E1F3B: mov     al, ds:byte_B3D3EE[eax]
0x6E1F41: mov     [esi+1Dh], al
0x6E1F44: pop     esi
0x6E1F45: pop     ebx
0x6E1F46: retn    0Ch
0x6E1F49: mov     [esi+0Ah], bx
0x6E1F4D: mov     [esi+24h], ebx
0x6E1F50: mov     [esi+14h], ebx
0x6E1F53: mov     [esi+1Dh], bl
0x6E1F56: pop     esi
0x6E1F57: pop     ebx
0x6E1F58: retn    0Ch
