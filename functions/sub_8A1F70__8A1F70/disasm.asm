0x8A1F70: push    esi
0x8A1F71: push    edi
0x8A1F72: mov     edi, [esp+8+arg_0]
0x8A1F76: push    edi
0x8A1F77: mov     esi, ecx
0x8A1F79: call    sub_8A2760
0x8A1F7E: test    al, al
0x8A1F80: jz      short loc_8A1FAA
0x8A1F82: test    esi, esi
0x8A1F84: jz      short loc_8A1F99
0x8A1F86: mov     esi, [esi+8]
0x8A1F89: test    esi, esi
0x8A1F8B: jz      short loc_8A1F99
0x8A1F8D: mov     esi, [esi+0Ch]
0x8A1F90: test    esi, esi
0x8A1F92: jz      short loc_8A1F99
0x8A1F94: mov     ecx, [esi+8]
0x8A1F97: jmp     short loc_8A1F9B
0x8A1F99: xor     ecx, ecx
0x8A1F9B: test    ecx, ecx
0x8A1F9D: jz      short loc_8A1FAA
0x8A1F9F: mov     eax, [ecx]
0x8A1FA1: mov     edx, [eax+8Ch]
0x8A1FA7: push    edi
0x8A1FA8: call    edx
0x8A1FAA: pop     edi
0x8A1FAB: pop     esi
0x8A1FAC: retn    4
