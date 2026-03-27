0x4D6E60: mov     eax, [esp+arg_0]
0x4D6E64: test    eax, eax
0x4D6E66: push    esi
0x4D6E67: mov     esi, ecx
0x4D6E69: jnz     short loc_4D6E78
0x4D6E6B: mov     ecx, ds:0B33B00h
0x4D6E71: push    eax
0x4D6E72: push    esi
0x4D6E73: call    sub_4533F0
0x4D6E78: test    eax, 40000h
0x4D6E7D: push    8
0x4D6E7F: lea     ecx, [esi+44h]
0x4D6E82: jz      short loc_4D6E94
0x4D6E84: call    sub_41F830
0x4D6E89: neg     al
0x4D6E8B: pop     esi
0x4D6E8C: sbb     eax, eax
0x4D6E8E: add     eax, 1
0x4D6E91: retn    4
0x4D6E94: call    sub_41F830
0x4D6E99: pop     esi
0x4D6E9A: retn    4
