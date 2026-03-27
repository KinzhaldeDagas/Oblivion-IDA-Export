0x77BF70: push    esi
0x77BF71: push    edi
0x77BF72: mov     edi, [esp+8+arg_0]
0x77BF76: mov     esi, ecx
0x77BF78: cmp     [esi+14h], edi
0x77BF7B: jz      short loc_77BFA7
0x77BF7D: mov     eax, [esi]
0x77BF7F: mov     edx, [eax+34h]
0x77BF82: mov     [esi+14h], edi
0x77BF85: call    edx
0x77BF87: test    eax, eax
0x77BF89: jz      short loc_77BFA7
0x77BF8B: jmp     short loc_77BF90
0x77BF8D: align 10h
0x77BF90: mov     edx, [eax]
0x77BF92: mov     ecx, eax
0x77BF94: mov     eax, [edx+10h]
0x77BF97: push    edi
0x77BF98: call    eax
0x77BF9A: mov     edx, [esi]
0x77BF9C: mov     eax, [edx+38h]
0x77BF9F: mov     ecx, esi
0x77BFA1: call    eax
0x77BFA3: test    eax, eax
0x77BFA5: jnz     short loc_77BF90
0x77BFA7: pop     edi
0x77BFA8: pop     esi
0x77BFA9: retn    4
