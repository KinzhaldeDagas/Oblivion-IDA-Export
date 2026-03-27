0x6A1E20: push    ebx
0x6A1E21: mov     ebx, [esp+4+arg_0]
0x6A1E25: test    ebx, ebx
0x6A1E27: push    esi
0x6A1E28: mov     esi, ecx
0x6A1E2A: jnz     short loc_6A1E33
0x6A1E2C: pop     esi
0x6A1E2D: xor     al, al
0x6A1E2F: pop     ebx
0x6A1E30: retn    4
0x6A1E33: push    edi
0x6A1E34: push    0; int
0x6A1E36: push    offset ??_R0?AVTESEnchantableForm@@@8; struct TypeDescriptor *
0x6A1E3B: push    offset ??_R0?AVTESBoundObject@@@8; struct _s_RTTICompleteObjectLocator *
0x6A1E40: push    0; int
0x6A1E42: push    ebx; void *
0x6A1E43: call    OblivionDynamicCast
0x6A1E48: add     esp, 14h
0x6A1E4B: test    eax, eax
0x6A1E4D: jz      short loc_6A1E5D
0x6A1E4F: mov     eax, [eax+4]
0x6A1E52: test    eax, eax
0x6A1E54: jz      short loc_6A1E5D
0x6A1E56: lea     edi, [eax+18h]
0x6A1E59: test    edi, edi
0x6A1E5B: jnz     short loc_6A1E65
0x6A1E5D: pop     edi
0x6A1E5E: pop     esi
0x6A1E5F: xor     al, al
0x6A1E61: pop     ebx
0x6A1E62: retn    4
0x6A1E65: mov     eax, [esi]
0x6A1E67: mov     edx, [eax+8]
0x6A1E6A: mov     ecx, esi
0x6A1E6C: call    edx
0x6A1E6E: xor     dl, dl
0x6A1E70: test    eax, eax
0x6A1E72: jz      short loc_6A1E91
0x6A1E74: test    dl, dl
0x6A1E76: jnz     short loc_6A1E91
0x6A1E78: mov     ecx, [eax]
0x6A1E7A: test    ecx, ecx
0x6A1E7C: jz      short loc_6A1E8A
0x6A1E7E: cmp     [ecx+8], edi
0x6A1E81: jnz     short loc_6A1E8A
0x6A1E83: cmp     [ecx+30h], ebx
0x6A1E86: jnz     short loc_6A1E8A
0x6A1E88: mov     dl, 1
0x6A1E8A: mov     eax, [eax+4]
0x6A1E8D: test    eax, eax
0x6A1E8F: jnz     short loc_6A1E74
0x6A1E91: pop     edi
0x6A1E92: pop     esi
0x6A1E93: mov     al, dl
0x6A1E95: pop     ebx
0x6A1E96: retn    4
