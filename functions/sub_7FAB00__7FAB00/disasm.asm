0x7FAB00: mov     eax, [esp+arg_0]
0x7FAB04: cmp     eax, 13h
0x7FAB07: ja      short locret_7FAB2C
0x7FAB09: mov     ecx, [esp+arg_4]
0x7FAB0D: mov     edx, [esp+arg_8]
0x7FAB11: shl     eax, 5
0x7FAB14: add     eax, offset dword_B47008
0x7FAB19: mov     [eax], ecx
0x7FAB1B: mov     ecx, [esp+arg_C]
0x7FAB1F: mov     [eax+4], edx
0x7FAB22: mov     edx, [esp+arg_10]
0x7FAB26: mov     [eax+8], ecx
0x7FAB29: mov     [eax+0Ch], edx
0x7FAB2C: retn
