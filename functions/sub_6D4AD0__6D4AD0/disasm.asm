0x6D4AD0: push    ebx
0x6D4AD1: push    esi
0x6D4AD2: mov     esi, ecx
0x6D4AD4: mov     eax, [esi+24h]
0x6D4AD7: xor     ebx, ebx
0x6D4AD9: cmp     eax, ebx
0x6D4ADB: jz      short loc_6D4AED
0x6D4ADD: mov     ecx, [esi+28h]
0x6D4AE0: mov     edx, ds:0B3D2C8h[ecx*4]
0x6D4AE7: push    eax
0x6D4AE8: call    edx ; dword_B3D2C8
0x6D4AEA: add     esp, 4
0x6D4AED: mov     ecx, [esp+8+arg_0]
0x6D4AF1: cmp     ecx, ebx
0x6D4AF3: jz      short loc_6D4B18
0x6D4AF5: mov     eax, [esp+8+arg_4]
0x6D4AF9: cmp     eax, ebx
0x6D4AFB: jz      short loc_6D4B18
0x6D4AFD: mov     [esi+20h], eax
0x6D4B00: mov     eax, [esp+8+arg_8]
0x6D4B04: mov     [esi+24h], ecx
0x6D4B07: mov     [esi+28h], eax
0x6D4B0A: mov     al, ds:byte_B3D3E8[eax]
0x6D4B10: mov     [esi+4Ah], al
0x6D4B13: pop     esi
0x6D4B14: pop     ebx
0x6D4B15: retn    0Ch
0x6D4B18: mov     [esi+20h], ebx
0x6D4B1B: mov     [esi+24h], ebx
0x6D4B1E: mov     [esi+28h], ebx
0x6D4B21: mov     [esi+4Ah], bl
0x6D4B24: pop     esi
0x6D4B25: pop     ebx
0x6D4B26: retn    0Ch
