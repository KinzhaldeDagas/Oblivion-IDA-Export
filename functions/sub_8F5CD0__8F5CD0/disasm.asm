0x8F5CD0: push    ebx
0x8F5CD1: mov     ebx, [esp+4+arg_0]
0x8F5CD5: push    ebp
0x8F5CD6: mov     ebp, [esp+8+arg_4]
0x8F5CDA: push    esi
0x8F5CDB: mov     esi, ecx
0x8F5CDD: mov     ecx, [esi+10h]
0x8F5CE0: push    edi
0x8F5CE1: mov     edi, [esi+14h]
0x8F5CE4: sub     edi, ecx
0x8F5CE6: cmp     ebp, edi
0x8F5CE8: jle     short loc_8F5D5A
0x8F5CEA: lea     ebx, [ebx+0]
0x8F5CF0: mov     eax, [esi+10h]
0x8F5CF3: mov     ecx, [esi+0Ch]
0x8F5CF6: push    edi
0x8F5CF7: add     eax, ecx
0x8F5CF9: push    ebx
0x8F5CFA: push    eax
0x8F5CFB: call    sub_8B1890
0x8F5D00: mov     edx, [esi+10h]
0x8F5D03: mov     eax, [esi+8]
0x8F5D06: add     ebx, edi
0x8F5D08: add     edx, edi
0x8F5D0A: sub     ebp, edi
0x8F5D0C: add     esp, 0Ch
0x8F5D0F: xor     edi, edi
0x8F5D11: test    eax, eax
0x8F5D13: mov     [esp+10h+arg_0], ebx
0x8F5D17: mov     [esi+10h], edx
0x8F5D1A: mov     ebx, edx
0x8F5D1C: jz      short loc_8F5D46
0x8F5D1E: test    ebx, ebx
0x8F5D20: jle     short loc_8F5D3F
0x8F5D22: mov     ecx, [esi+8]
0x8F5D25: mov     edx, [ecx]
0x8F5D27: mov     eax, ebx
0x8F5D29: sub     eax, edi
0x8F5D2B: push    eax
0x8F5D2C: mov     eax, [esi+0Ch]
0x8F5D2F: add     eax, edi
0x8F5D31: push    eax
0x8F5D32: call    dword ptr [edx+0Ch]
0x8F5D35: add     edi, eax
0x8F5D37: test    eax, eax
0x8F5D39: jz      short loc_8F5D46
0x8F5D3B: cmp     edi, ebx
0x8F5D3D: jl      short loc_8F5D22
0x8F5D3F: mov     dword ptr [esi+10h], 0
0x8F5D46: cmp     edi, ebx
0x8F5D48: jnz     short loc_8F5D80
0x8F5D4A: mov     edi, [esi+14h]
0x8F5D4D: mov     ecx, [esi+10h]
0x8F5D50: mov     ebx, [esp+10h+arg_0]
0x8F5D54: sub     edi, ecx
0x8F5D56: cmp     ebp, edi
0x8F5D58: jg      short loc_8F5CF0
0x8F5D5A: mov     ecx, [esi+0Ch]
0x8F5D5D: mov     edi, [esi+10h]
0x8F5D60: push    ebp
0x8F5D61: add     ecx, edi
0x8F5D63: push    ebx
0x8F5D64: push    ecx
0x8F5D65: call    sub_8B1890
0x8F5D6A: mov     eax, [esi+10h]
0x8F5D6D: add     esp, 0Ch
0x8F5D70: add     eax, ebp
0x8F5D72: pop     edi
0x8F5D73: mov     [esi+10h], eax
0x8F5D76: mov     eax, [esp+0Ch+arg_4]
0x8F5D7A: pop     esi
0x8F5D7B: pop     ebp
0x8F5D7C: pop     ebx
0x8F5D7D: retn    8
0x8F5D80: mov     eax, [esp+10h+arg_4]
0x8F5D84: pop     edi
0x8F5D85: pop     esi
0x8F5D86: sub     eax, ebp
0x8F5D88: pop     ebp
0x8F5D89: pop     ebx
0x8F5D8A: retn    8
