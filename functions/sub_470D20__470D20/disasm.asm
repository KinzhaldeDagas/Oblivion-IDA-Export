0x470D20: push    ecx
0x470D21: push    ebx
0x470D22: push    esi
0x470D23: mov     esi, ecx
0x470D25: jmp     short loc_470D30
0x470D27: align 10h
0x470D30: mov     ebx, [esp+0Ch+arg_0]
0x470D34: mov     ecx, [esi+9Ch]
0x470D3A: lea     eax, [esp+0Ch+var_4]
0x470D3E: push    eax
0x470D3F: push    ebx
0x470D40: call    sub_470960
0x470D45: test    al, al
0x470D47: jz      short loc_470D5E
0x470D49: mov     ecx, [esp+0Ch+var_4]
0x470D4D: mov     edx, [ecx]
0x470D4F: mov     eax, [edx+10h]
0x470D52: push    0FFFFFFFFh
0x470D54: call    eax
0x470D56: test    eax, eax
0x470D58: jnz     loc_470EDF
0x470D5E: test    ebx, 0F00h
0x470D64: jz      loc_470E34
0x470D6A: push    ebx
0x470D6B: call    sub_51A9E0
0x470D70: add     esp, 4
0x470D73: sub     eax, 3
0x470D76: jz      short loc_470DCA
0x470D78: sub     eax, 1
0x470D7B: jz      short loc_470D84
0x470D7D: sub     eax, 1
0x470D80: jz      short loc_470DCA
0x470D82: jmp     short loc_470E02
0x470D84: mov     ecx, ebx
0x470D86: and     ecx, 0F000h
0x470D8C: cmp     ecx, 2000h
0x470D92: jz      short loc_470DCA
0x470D94: mov     ecx, [esi+9Ch]
0x470D9A: mov     eax, ebx
0x470D9C: lea     edx, [esp+10h+var_8]
0x470DA0: and     eax, 0F3FFh
0x470DA5: push    edx
0x470DA6: or      eax, 300h
0x470DAB: push    eax
0x470DAC: call    sub_470960
0x470DB1: test    al, al
0x470DB3: jz      short loc_470DCA
0x470DB5: mov     ecx, [esp+10h+var_8]
0x470DB9: mov     edx, [ecx]
0x470DBB: mov     eax, [edx+10h]
0x470DBE: push    0FFFFFFFFh
0x470DC0: call    eax
0x470DC2: test    eax, eax
0x470DC4: jnz     loc_470EE8
0x470DCA: mov     edx, ebx
0x470DCC: lea     ecx, [esp+10h+var_8]
0x470DD0: and     edx, 0F2FFh
0x470DD6: push    ecx
0x470DD7: mov     ecx, [esi+9Ch]
0x470DDD: or      edx, 200h
0x470DE3: push    edx
0x470DE4: call    sub_470960
0x470DE9: test    al, al
0x470DEB: jz      short loc_470E02
0x470DED: mov     ecx, [esp+10h+var_8]
0x470DF1: mov     eax, [ecx]
0x470DF3: mov     edx, [eax+10h]
0x470DF6: push    0FFFFFFFFh
0x470DF8: call    edx
0x470DFA: test    eax, eax
0x470DFC: jnz     loc_470EFA
0x470E02: lea     eax, [esp+10h+var_8]
0x470E06: mov     ecx, ebx
0x470E08: and     ecx, 0F0FFh
0x470E0E: push    eax
0x470E0F: push    ecx
0x470E10: mov     ecx, [esi+9Ch]
0x470E16: call    sub_470960
0x470E1B: test    al, al
0x470E1D: jz      short loc_470E34
0x470E1F: mov     ecx, [esp+10h+var_8]
0x470E23: mov     edx, [ecx]
0x470E25: mov     eax, [edx+10h]
0x470E28: push    0FFFFFFFFh
0x470E2A: call    eax
0x470E2C: test    eax, eax
0x470E2E: jnz     loc_470F0C
0x470E34: test    bx, bx
0x470E37: jz      short def_470E4A
0x470E39: push    ebx
0x470E3A: call    sub_51AA00
0x470E3F: add     eax, 0FFFFFFF9h; switch 4 cases
0x470E42: add     esp, 4
0x470E45: cmp     eax, 3
0x470E48: ja      short def_470E4A
0x470E4A: jmp     ds:jpt_470E4A[eax*4]; switch jump
0x470E51: and     ebx, 0FF03h; jumptable 00470E4A case 7
0x470E57: or      ebx, 3
0x470E5A: jmp     short loc_470E7B
0x470E5C: and     ebx, 0FF04h; jumptable 00470E4A case 8
0x470E62: or      ebx, 4
0x470E65: jmp     short loc_470E7B
0x470E67: and     ebx, 0FF05h; jumptable 00470E4A case 9
0x470E6D: or      ebx, 5
0x470E70: jmp     short loc_470E7B
0x470E72: and     ebx, 0FF06h; jumptable 00470E4A case 10
0x470E78: or      ebx, 6
0x470E7B: cmp     bx, 0FFh
0x470E80: jz      short loc_470E99
0x470E82: push    1
0x470E84: push    ebx
0x470E85: mov     ecx, esi
0x470E87: call    sub_470D20
0x470E8C: movzx   eax, ax
0x470E8F: mov     cl, al
0x470E91: xor     cl, bl
0x470E93: jz      loc_470F1C
0x470E99: mov     ebx, [esp+14h+var_4]
