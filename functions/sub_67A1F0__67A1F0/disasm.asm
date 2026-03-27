0x67A1F0: push    esi
0x67A1F1: push    edi
0x67A1F2: mov     edi, ecx
0x67A1F4: mov     esi, [edi]
0x67A1F6: test    esi, esi
0x67A1F8: jz      short loc_67A216
0x67A1FA: lea     eax, [esi+4]
0x67A1FD: push    eax; lpAddend
0x67A1FE: call    dword ptr ds:0A2807Ch
0x67A204: test    eax, eax
0x67A206: jnz     short loc_67A216
0x67A208: test    esi, esi
0x67A20A: jz      short loc_67A216
0x67A20C: mov     edx, [esi]
0x67A20E: mov     eax, [edx]
0x67A210: push    1
0x67A212: mov     ecx, esi
0x67A214: call    eax
0x67A216: test    [esp+8+arg_0], 1
0x67A21B: jz      short loc_67A226
0x67A21D: push    edi
0x67A21E: call    FormHeapFree
0x67A223: add     esp, 4
0x67A226: mov     eax, edi
0x67A228: pop     edi
0x67A229: pop     esi
0x67A22A: retn    4
