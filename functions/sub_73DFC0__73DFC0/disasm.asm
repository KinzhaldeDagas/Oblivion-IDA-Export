0x73DFC0: push    ebx
0x73DFC1: push    esi
0x73DFC2: mov     esi, [esp+8+arg_0]
0x73DFC6: push    edi
0x73DFC7: push    esi
0x73DFC8: mov     edi, ecx
0x73DFCA: call    nullsub_returnvVoid_1arg
0x73DFCF: mov     ecx, esi
0x73DFD1: call    sub_7124A0
0x73DFD6: mov     esi, [edi+14h]
0x73DFD9: mov     ebx, eax
0x73DFDB: cmp     esi, ebx
0x73DFDD: jz      short loc_73E010
0x73DFDF: test    esi, esi
0x73DFE1: jz      short loc_73DFFF
0x73DFE3: lea     eax, [esi+4]
0x73DFE6: push    eax; lpAddend
0x73DFE7: call    dword ptr ds:0A2807Ch
0x73DFED: test    eax, eax
0x73DFEF: jnz     short loc_73DFFF
0x73DFF1: test    esi, esi
0x73DFF3: jz      short loc_73DFFF
0x73DFF5: mov     edx, [esi]
0x73DFF7: mov     eax, [edx]
0x73DFF9: push    1
0x73DFFB: mov     ecx, esi
0x73DFFD: call    eax
0x73DFFF: test    ebx, ebx
0x73E001: mov     [edi+14h], ebx
0x73E004: jz      short loc_73E010
0x73E006: add     ebx, 4
0x73E009: push    ebx; lpAddend
0x73E00A: call    dword ptr ds:0A28078h
0x73E010: pop     edi
0x73E011: pop     esi
0x73E012: pop     ebx
0x73E013: retn    4
