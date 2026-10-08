0x7FAB00: mov     eax, [esp+lightSlot]
0x7FAB04: cmp     eax, 13h
0x7FAB07: ja      short locret_7FAB2C
0x7FAB09: mov     ecx, [esp+x]
0x7FAB0D: mov     edx, [esp+y]
0x7FAB11: shl     eax, 5
0x7FAB14: add     eax, offset unk_B47008; Write LightColor bank: slot 0 maps to pixel c9, slot 1 to c11, through slot 19.
0x7FAB19: mov     [eax], ecx
0x7FAB1B: mov     ecx, [esp+z]
0x7FAB1F: mov     [eax+4], edx
0x7FAB22: mov     edx, [esp+w]
0x7FAB26: mov     [eax+8], ecx
0x7FAB29: mov     [eax+0Ch], edx
0x7FAB2C: retn
