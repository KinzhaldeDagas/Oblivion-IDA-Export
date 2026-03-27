0x566D00: push    ebx
0x566D01: push    esi
0x566D02: mov     ebx, ecx
0x566D04: mov     esi, [ebx+24h]
0x566D07: push    edi
0x566D08: xor     edi, edi
0x566D0A: test    esi, esi
0x566D0C: jz      short loc_566D7F; jumptable 00566D26 case 3
0x566D0E: mov     ecx, esi
0x566D10: call    sub_569740
0x566D15: cmp     eax, 2
0x566D18: jz      short loc_566D7F; jumptable 00566D26 case 3
0x566D1A: mov     ecx, esi
0x566D1C: call    sub_569740
0x566D21: cmp     eax, 5; switch 6 cases
0x566D24: ja      short def_566D26; jumptable 00566D26 default case, cases 1,2
0x566D26: jmp     ds:jpt_566D26[eax*4]; switch jump
0x566D2D: mov     ecx, esi; jumptable 00566D26 case 0
0x566D2F: call    sub_5697E0
0x566D34: test    eax, eax
0x566D36: jz      short def_566D26; jumptable 00566D26 default case, cases 1,2
0x566D38: mov     ecx, esi
0x566D3A: call    sub_5697E0
0x566D3F: mov     edi, eax
0x566D41: pop     edi
0x566D42: pop     esi
0x566D43: pop     ebx
0x566D44: retn    4
0x566D47: mov     esi, [esp+0Ch+arg_0]; jumptable 00566D26 cases 4,5
0x566D4B: test    esi, esi
0x566D4D: jz      short def_566D26; jumptable 00566D26 default case, cases 1,2
0x566D4F: mov     ecx, [esi+58h]
0x566D52: test    ecx, ecx
0x566D54: jz      short def_566D26; jumptable 00566D26 default case, cases 1,2
0x566D56: mov     eax, [ecx]
0x566D58: mov     edx, [eax+184h]
0x566D5E: call    edx
0x566D60: cmp     eax, ebx
0x566D62: jnz     short def_566D26; jumptable 00566D26 default case, cases 1,2
0x566D64: mov     ecx, [esi+58h]
0x566D67: mov     eax, [ecx]
0x566D69: mov     edx, [eax+3B8h]
0x566D6F: call    edx
0x566D71: test    eax, eax
0x566D73: jnz     short loc_566D87
0x566D75: mov     edi, esi
0x566D77: mov     eax, edi
0x566D79: pop     edi
0x566D7A: pop     esi
0x566D7B: pop     ebx
0x566D7C: retn    4
0x566D7F: mov     eax, [esp+0Ch+arg_0]; jumptable 00566D26 case 3
0x566D83: test    eax, eax
0x566D85: jz      short def_566D26; jumptable 00566D26 default case, cases 1,2
0x566D87: mov     edi, eax
0x566D89: mov     eax, edi; jumptable 00566D26 default case, cases 1,2
0x566D8B: pop     edi
0x566D8C: pop     esi
0x566D8D: pop     ebx
0x566D8E: retn    4
