0x60DF00: mov     eax, [esp+arg_0]
0x60DF04: test    eax, eax
0x60DF06: jz      short locret_60DF13
0x60DF08: push    eax
0x60DF09: mov     ecx, offset dword_B3B800
0x60DF0E: call    BSSimpleList_Remove
0x60DF13: retn
