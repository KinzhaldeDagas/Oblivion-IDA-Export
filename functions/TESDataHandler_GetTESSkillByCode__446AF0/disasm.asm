0x446AF0: mov     al, [esp+arg_0]
0x446AF4: cmp     al, 14h
0x446AF6: ja      short loc_446B0B
0x446AF8: movsx   eax, al
0x446AFB: lea     eax, [eax+eax*2]
0x446AFE: shl     eax, 5
0x446B01: lea     eax, [eax+ecx+0D8h]
0x446B08: retn    4
0x446B0B: xor     eax, eax
0x446B0D: retn    4
