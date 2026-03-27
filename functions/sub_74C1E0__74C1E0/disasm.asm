0x74C1E0: push    esi
0x74C1E1: push    edi
0x74C1E2: push    84h ; '„'; Size
0x74C1E7: mov     edi, ecx
0x74C1E9: call    FormHeapAlloc
0x74C1EE: add     esp, 4
0x74C1F1: test    eax, eax
0x74C1F3: jz      short loc_74C200
0x74C1F5: mov     ecx, eax
0x74C1F7: call    sub_74ACC0
0x74C1FC: mov     esi, eax
0x74C1FE: jmp     short loc_74C202
0x74C200: xor     esi, esi
0x74C202: mov     eax, [esp+8+arg_0]
0x74C206: push    eax
0x74C207: push    esi
0x74C208: mov     ecx, edi
0x74C20A: call    sub_74EE00
0x74C20F: movzx   ecx, word ptr [edi+5Ah]
0x74C213: push    ecx
0x74C214: lea     ecx, [esi+50h]
0x74C217: call    sub_74A8C0
0x74C21C: mov     edx, [edi+70h]
0x74C21F: mov     [esi+70h], edx
0x74C222: mov     eax, [edi+74h]
0x74C225: mov     [esi+74h], eax
0x74C228: mov     ecx, [edi+78h]
0x74C22B: lea     eax, [edi+78h]
0x74C22E: mov     [esi+78h], ecx
0x74C231: mov     edx, [eax+4]
0x74C234: mov     [esi+7Ch], edx
0x74C237: mov     eax, [eax+8]
0x74C23A: mov     [esi+80h], eax
0x74C240: pop     edi
0x74C241: mov     eax, esi
0x74C243: pop     esi
0x74C244: retn    4
