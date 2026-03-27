0x776DD0: mov     ecx, [esp+arg_8]
0x776DD4: mov     eax, [esp+arg_C]
0x776DD8: push    esi
0x776DD9: mov     esi, [esp+4+arg_4]
0x776DDD: xor     edx, edx
0x776DDF: test    esi, esi
0x776DE1: mov     dword ptr [ecx], 0
0x776DE7: mov     dword ptr [eax], 0
0x776DED: jz      short loc_776DF3
0x776DEF: movzx   edx, word ptr [esi+20h]
0x776DF3: mov     esi, [esp+4+arg_10]
0x776DF7: mov     dword ptr [esi], 0
0x776DFD: add     dword ptr [eax], 0Ch
0x776E00: test    dx, dx
0x776E03: mov     esi, [eax]
0x776E05: push    edi
0x776E06: mov     edi, [esp+8+arg_14]
0x776E0A: mov     [edi], esi
0x776E0C: jnz     short loc_776E13
0x776E0E: or      dword ptr [ecx], 2
0x776E11: jmp     short loc_776E1C
0x776E13: mov     dword ptr [ecx], 0Ah
0x776E19: add     dword ptr [eax], 0Ch
0x776E1C: mov     esi, [esp+8+arg_0]
0x776E20: cmp     dword ptr [esi+20h], 0
0x776E24: jz      short loc_776E34
0x776E26: or      dword ptr [ecx], 10h
0x776E29: mov     edx, [eax]
0x776E2B: mov     edi, [esp+8+arg_18]
0x776E2F: mov     [edi], edx
0x776E31: add     dword ptr [eax], 0Ch
0x776E34: cmp     dword ptr [esi+24h], 0
0x776E38: jz      short loc_776E48
0x776E3A: or      dword ptr [ecx], 40h
0x776E3D: mov     edx, [eax]
0x776E3F: mov     edi, [esp+8+arg_1C]
0x776E43: mov     [edi], edx
0x776E45: add     dword ptr [eax], 4
0x776E48: movzx   edx, byte ptr [esi+2Ch]
0x776E4C: and     edx, 3Fh
0x776E4F: pop     edi
0x776E50: jnz     short loc_776E59
0x776E52: mov     edx, 1
0x776E57: jmp     short loc_776E69
0x776E59: mov     esi, ds:0B28CB0h
0x776E5F: cmp     edx, esi
0x776E61: jbe     short loc_776E65
0x776E63: mov     edx, esi
0x776E65: test    edx, edx
0x776E67: jz      short loc_776E80
0x776E69: mov     esi, edx
0x776E6B: shl     esi, 8
0x776E6E: or      [ecx], esi
0x776E70: mov     ecx, [eax]
0x776E72: mov     esi, [esp+4+arg_20]
0x776E76: add     edx, edx
0x776E78: add     edx, edx
0x776E7A: add     edx, edx
0x776E7C: mov     [esi], ecx
0x776E7E: add     [eax], edx
0x776E80: pop     esi
0x776E81: retn    24h ; '$'
