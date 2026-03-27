0x633C50: push    esi
0x633C51: mov     esi, [esp+4+arg_0]
0x633C55: test    esi, esi
0x633C57: jz      short loc_633CAA
0x633C59: mov     eax, ds:0B333C4h
0x633C5E: cmp     esi, eax
0x633C60: jnz     short loc_633C6B
0x633C62: cmp     byte ptr [eax+738h], 0
0x633C69: jnz     short loc_633CAA
0x633C6B: mov     ecx, [esi+58h]
0x633C6E: mov     eax, [ecx]
0x633C70: mov     edx, [eax+444h]
0x633C76: call    edx
0x633C78: cmp     eax, ds:0B36A70h
0x633C7E: jge     short loc_633CAA
0x633C80: mov     eax, [esi]
0x633C82: mov     edx, [eax+330h]
0x633C88: mov     ecx, esi
0x633C8A: call    edx
0x633C8C: test    eax, eax
0x633C8E: jz      short loc_633CAA
0x633C90: mov     ecx, eax
0x633C92: call    sub_6135F0
0x633C97: test    eax, eax
0x633C99: jz      short loc_633CAA
0x633C9B: mov     edx, [eax]
0x633C9D: push    1
0x633C9F: mov     ecx, eax
0x633CA1: mov     eax, [edx+240h]
0x633CA7: push    esi
0x633CA8: call    eax
0x633CAA: pop     esi
0x633CAB: retn    4
