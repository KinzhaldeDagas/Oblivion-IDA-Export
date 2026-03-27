0x89ED20: push    esi
0x89ED21: mov     esi, [esp+4+arg_4]
0x89ED25: test    esi, esi
0x89ED27: push    edi
0x89ED28: mov     edi, ecx
0x89ED2A: jz      short loc_89ED5A
0x89ED2C: mov     eax, [esi]
0x89ED2E: mov     edx, [eax+4]
0x89ED31: mov     ecx, esi
0x89ED33: call    edx
0x89ED35: test    eax, eax
0x89ED37: jz      short loc_89ED4E
0x89ED39: lea     esp, [esp+0]
0x89ED40: cmp     eax, offset dword_BA7D84
0x89ED45: jz      short loc_89ED78
0x89ED47: mov     eax, [eax+4]
0x89ED4A: test    eax, eax
0x89ED4C: jnz     short loc_89ED40
0x89ED4E: xor     al, al
0x89ED50: neg     al
0x89ED52: sbb     eax, eax
0x89ED54: and     eax, esi
0x89ED56: mov     esi, eax
0x89ED58: jnz     short loc_89ED65
0x89ED5A: mov     esi, [edi+10h]
0x89ED5D: test    esi, esi
0x89ED5F: jz      loc_89EDEF
0x89ED65: mov     eax, [esi+8]
0x89ED68: test    eax, eax
0x89ED6A: jz      short loc_89ED7C
0x89ED6C: mov     ecx, [eax+50h]
0x89ED6F: mov     eax, [ecx]
0x89ED71: mov     edx, [eax+8]
0x89ED74: call    edx
0x89ED76: jmp     short loc_89ED81
0x89ED78: mov     al, 1
0x89ED7A: jmp     short loc_89ED50
0x89ED7C: mov     eax, 7
0x89ED81: mov     ecx, [esp+8+arg_0]
0x89ED85: cmp     eax, ecx
0x89ED87: jz      short loc_89EDEF
0x89ED89: mov     eax, [esi]
0x89ED8B: mov     edx, [eax+9Ch]
0x89ED91: push    ecx
0x89ED92: mov     ecx, esi
0x89ED94: call    edx
0x89ED96: test    al, al
0x89ED98: jz      short loc_89EDEF
0x89ED9A: mov     eax, [esi+8]
0x89ED9D: test    eax, eax
0x89ED9F: jz      short loc_89EDB7
0x89EDA1: mov     ecx, [eax+50h]
0x89EDA4: mov     eax, [ecx]
0x89EDA6: mov     edx, [eax+8]
0x89EDA9: call    edx
0x89EDAB: cmp     eax, 6
0x89EDAE: jge     short loc_89EDB7
0x89EDB0: or      word ptr [edi+0Ch], 8
0x89EDB5: jmp     short loc_89EDBD
0x89EDB7: and     word ptr [edi+0Ch], 0FFF7h
0x89EDBD: mov     eax, [esi+8]
0x89EDC0: test    eax, eax
0x89EDC2: jz      short loc_89EDEF
0x89EDC4: mov     ecx, [eax+50h]
0x89EDC7: mov     eax, [ecx]
0x89EDC9: mov     edx, [eax+8]
0x89EDCC: call    edx
0x89EDCE: cmp     eax, 6
0x89EDD1: jge     short loc_89EDEF
0x89EDD3: mov     edi, [esi+8]
0x89EDD6: test    edi, edi
0x89EDD8: jz      short loc_89EDEF
0x89EDDA: mov     ecx, esi
0x89EDDC: call    sub_89F570
0x89EDE1: mov     ecx, edi
0x89EDE3: call    sub_8A6410
0x89EDE8: mov     ecx, esi
0x89EDEA: call    sub_89F570
0x89EDEF: pop     edi
0x89EDF0: pop     esi
0x89EDF1: retn    8
