0x57FF20: push    esi
0x57FF21: push    edi
0x57FF22: mov     edi, [esp+8+a2]
0x57FF26: mov     esi, ecx
0x57FF28: push    0; a3
0x57FF2A: push    edi; a2
0x57FF2B: lea     ecx, [esi+18h]; this
0x57FF2E: call    BSStringT_Set
0x57FF33: push    0; a3
0x57FF35: push    edi; a2
0x57FF36: lea     ecx, [esi+20h]; this
0x57FF39: call    BSStringT_Set
0x57FF3E: pop     edi
0x57FF3F: pop     esi
0x57FF40: retn    4
