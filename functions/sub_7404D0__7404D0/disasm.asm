0x7404D0: push    ebx
0x7404D1: push    esi
0x7404D2: mov     esi, [esp+8+arg_0]
0x7404D6: push    edi
0x7404D7: push    esi
0x7404D8: mov     edi, ecx
0x7404DA: call    sub_732E00
0x7404DF: mov     ecx, esi
0x7404E1: call    sub_7124A0
0x7404E6: mov     esi, [edi+5Ch]
0x7404E9: mov     ebx, eax
0x7404EB: cmp     esi, ebx
0x7404ED: jz      short loc_740520
0x7404EF: test    esi, esi
0x7404F1: jz      short loc_74050F
0x7404F3: lea     eax, [esi+4]
0x7404F6: push    eax; lpAddend
0x7404F7: call    dword ptr ds:0A2807Ch
0x7404FD: test    eax, eax
0x7404FF: jnz     short loc_74050F
0x740501: test    esi, esi
0x740503: jz      short loc_74050F
0x740505: mov     edx, [esi]
0x740507: mov     eax, [edx]
0x740509: push    1
0x74050B: mov     ecx, esi
0x74050D: call    eax
0x74050F: test    ebx, ebx
0x740511: mov     [edi+5Ch], ebx
0x740514: jz      short loc_740520
0x740516: add     ebx, 4
0x740519: push    ebx; lpAddend
0x74051A: call    dword ptr ds:0A28078h
0x740520: pop     edi
0x740521: pop     esi
0x740522: pop     ebx
0x740523: retn    4
