0x6FFCE0: push    esi
0x6FFCE1: mov     esi, [esp+4+a2]
0x6FFCE5: push    edi
0x6FFCE6: push    esi; a2
0x6FFCE7: mov     edi, ecx
0x6FFCE9: call    sub_7008A0
0x6FFCEE: add     edi, 8
0x6FFCF1: push    edi
0x6FFCF2: mov     ecx, esi
0x6FFCF4: call    sub_713620
0x6FFCF9: cmp     dword ptr [esi+0D8h], 500000Bh
0x6FFD03: mov     ecx, esi
0x6FFD05: jnb     short loc_6FFD18
0x6FFD07: call    sub_712A20
0x6FFD0C: mov     ecx, esi
0x6FFD0E: call    sub_712A20
0x6FFD13: pop     edi
0x6FFD14: pop     esi
0x6FFD15: retn    4
0x6FFD18: call    sub_712AE0
0x6FFD1D: mov     ecx, esi
0x6FFD1F: call    sub_712A20
0x6FFD24: pop     edi
0x6FFD25: pop     esi
0x6FFD26: retn    4
