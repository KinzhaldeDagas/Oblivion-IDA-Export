0x6D9D00: push    esi
0x6D9D01: push    edi
0x6D9D02: mov     edi, [esp+8+arg_0]
0x6D9D06: xor     eax, eax
0x6D9D08: cmp     edi, eax
0x6D9D0A: jz      short loc_6D9D2F
0x6D9D0C: mov     esi, [esp+8+arg_4]
0x6D9D10: cmp     esi, eax
0x6D9D12: jz      short loc_6D9D2F
0x6D9D14: mov     eax, [esp+8+arg_8]
0x6D9D18: mov     dl, ds:byte_B3D3EE[eax]
0x6D9D1E: mov     [ecx+0Ch], edi
0x6D9D21: pop     edi
0x6D9D22: mov     [ecx+8], esi
0x6D9D25: mov     [ecx+14h], dl
0x6D9D28: mov     [ecx+10h], eax
0x6D9D2B: pop     esi
0x6D9D2C: retn    0Ch
0x6D9D2F: pop     edi
0x6D9D30: mov     [ecx+8], eax
0x6D9D33: mov     [ecx+0Ch], eax
0x6D9D36: mov     [ecx+14h], al
0x6D9D39: mov     [ecx+10h], eax
0x6D9D3C: pop     esi
0x6D9D3D: retn    0Ch
