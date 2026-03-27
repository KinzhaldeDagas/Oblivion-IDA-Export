0x6D4A70: push    ebx
0x6D4A71: push    esi
0x6D4A72: mov     esi, ecx
0x6D4A74: mov     eax, [esi+18h]
0x6D4A77: xor     ebx, ebx
0x6D4A79: cmp     eax, ebx
0x6D4A7B: jz      short loc_6D4A8D
0x6D4A7D: mov     ecx, [esi+1Ch]
0x6D4A80: mov     edx, ds:0B3D2C8h[ecx*4]
0x6D4A87: push    eax
0x6D4A88: call    edx ; dword_B3D2C8
0x6D4A8A: add     esp, 4
0x6D4A8D: mov     ecx, [esp+8+arg_0]
0x6D4A91: cmp     ecx, ebx
0x6D4A93: jz      short loc_6D4AB8
0x6D4A95: mov     eax, [esp+8+arg_4]
0x6D4A99: cmp     eax, ebx
0x6D4A9B: jz      short loc_6D4AB8
0x6D4A9D: mov     [esi+14h], eax
0x6D4AA0: mov     eax, [esp+8+arg_8]
0x6D4AA4: mov     [esi+18h], ecx
0x6D4AA7: mov     [esi+1Ch], eax
0x6D4AAA: mov     al, ds:byte_B3D3E8[eax]
0x6D4AB0: mov     [esi+49h], al
0x6D4AB3: pop     esi
0x6D4AB4: pop     ebx
0x6D4AB5: retn    0Ch
0x6D4AB8: mov     [esi+14h], ebx
0x6D4ABB: mov     [esi+18h], ebx
0x6D4ABE: mov     [esi+1Ch], ebx
0x6D4AC1: mov     [esi+49h], bl
0x6D4AC4: pop     esi
0x6D4AC5: pop     ebx
0x6D4AC6: retn    0Ch
