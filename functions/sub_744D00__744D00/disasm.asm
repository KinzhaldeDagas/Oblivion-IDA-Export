0x744D00: push    ebx
0x744D01: push    esi
0x744D02: push    edi
0x744D03: mov     edi, [esp+0Ch+arg_0]
0x744D07: xor     ebx, ebx
0x744D09: cmp     edi, ebx
0x744D0B: jz      short loc_744D86
0x744D0D: mov     esi, [edi+1Ch]
0x744D10: cmp     esi, ebx
0x744D12: jz      short loc_744D86
0x744D14: cmp     [edi+20h], ebx
0x744D17: jz      short loc_744D86
0x744D19: cmp     [edi+24h], ebx
0x744D1C: jz      short loc_744D86
0x744D1E: mov     [edi+14h], ebx
0x744D21: mov     [edi+8], ebx
0x744D24: mov     [edi+18h], ebx
0x744D27: mov     dword ptr [edi+2Ch], 2
0x744D2E: mov     eax, [esi+8]
0x744D31: mov     [esi+10h], eax
0x744D34: mov     eax, [esi+18h]
0x744D37: cmp     eax, ebx
0x744D39: mov     [esi+14h], ebx
0x744D3C: jge     short loc_744D43
0x744D3E: neg     eax
0x744D40: mov     [esi+18h], eax
0x744D43: mov     eax, [esi+18h]
0x744D46: mov     ecx, eax
0x744D48: neg     ecx
0x744D4A: sbb     ecx, ecx
0x744D4C: and     ecx, 0FFFFFFB9h
0x744D4F: push    ebx
0x744D50: add     ecx, 71h ; 'q'
0x744D53: cmp     eax, 2
0x744D56: push    ebx
0x744D57: mov     [esi+4], ecx
0x744D5A: push    ebx
0x744D5B: jnz     short loc_744D64
0x744D5D: call    sub_745D90
0x744D62: jmp     short loc_744D69
0x744D64: call    sub_7459B0
0x744D69: add     esp, 0Ch
0x744D6C: mov     [edi+30h], eax
0x744D6F: push    esi
0x744D70: mov     [esi+20h], ebx
0x744D73: call    sub_746FB0
0x744D78: add     esp, 4
0x744D7B: call    sub_743F10
0x744D80: pop     edi
0x744D81: pop     esi
0x744D82: xor     eax, eax
0x744D84: pop     ebx
0x744D85: retn
0x744D86: pop     edi
0x744D87: pop     esi
0x744D88: mov     eax, 0FFFFFFFEh
0x744D8D: pop     ebx
0x744D8E: retn
