0x5E2C8B: mov     eax, [esi]
0x5E2C8D: mov     edx, [eax+40h]
0x5E2C90: push    400000h
0x5E2C95: mov     ecx, esi
0x5E2C97: call    edx
0x5E2C99: lea     eax, [edi-0Ch]
0x5E2C9C: cmp     eax, 14h
0x5E2C9F: ja      short Actor_ModCurAVf___Done
0x5E2CA1: cmp     edi, 12h
0x5E2CA4: jz      short Actor_ModCurAVf___CheckArmor
0x5E2CA6: cmp     edi, 1Bh
0x5E2CA9: jnz     short Actor_ModCurAVf___Done
