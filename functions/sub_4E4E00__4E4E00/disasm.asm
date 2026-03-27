0x4E4E00: push    ebp
0x4E4E01: push    esi
0x4E4E02: mov     esi, [esp+8+arg_0]
0x4E4E06: xor     ebp, ebp
0x4E4E08: cmp     esi, ebp
0x4E4E0A: mov     edx, ecx
0x4E4E0C: jz      short loc_4E4E7E
0x4E4E0E: push    edi
0x4E4E0F: mov     edi, [esp+0Ch+arg_4]
0x4E4E13: cmp     edi, ebp
0x4E4E15: mov     [esi], ebp
0x4E4E17: jz      short loc_4E4E7D
0x4E4E19: mov     eax, [edi+0Ch]
0x4E4E1C: sub     eax, 3
0x4E4E1F: mov     ecx, [edx+20h]
0x4E4E22: push    ebx
0x4E4E23: mov     ebx, [ecx+0Ch]
0x4E4E26: jz      short loc_4E4E5B
0x4E4E28: sub     eax, 2
0x4E4E2B: jz      short loc_4E4E5B
0x4E4E2D: sub     eax, 1
0x4E4E30: jnz     short loc_4E4E7C
0x4E4E32: cmp     [edi+8], ebx
0x4E4E35: jnz     short loc_4E4E7C
0x4E4E37: mov     eax, ds:0B05E20h
0x4E4E3C: mov     [esi], eax
0x4E4E3E: mov     dword ptr [esi+0Ch], 9
0x4E4E45: mov     ecx, [edx+20h]
0x4E4E48: mov     edx, [ecx+0Ch]
0x4E4E4B: pop     ebx
0x4E4E4C: pop     edi
0x4E4E4D: mov     [esi+10h], ebp
0x4E4E50: mov     [esi+4], ebp
0x4E4E53: mov     [esi+8], edx
0x4E4E56: pop     esi
0x4E4E57: pop     ebp
0x4E4E58: retn    8
0x4E4E5B: call    sub_4CA640
0x4E4E60: cmp     [edi+8], eax
0x4E4E63: jnz     short loc_4E4E7C
0x4E4E65: mov     eax, ds:0B05E20h
0x4E4E6A: mov     [esi], eax
0x4E4E6C: mov     dword ptr [esi+0Ch], 6
0x4E4E73: mov     [esi+8], ebx
0x4E4E76: mov     [esi+10h], ebp
0x4E4E79: mov     [esi+4], ebp
0x4E4E7C: pop     ebx
0x4E4E7D: pop     edi
0x4E4E7E: pop     esi
0x4E4E7F: pop     ebp
0x4E4E80: retn    8
