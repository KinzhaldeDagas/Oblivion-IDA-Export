0x41F130: push    12h; a2
0x41F132: call    BaseExtraList_GetExtraData
0x41F137: test    eax, eax
0x41F139: jz      short locret_41F142
0x41F13B: mov     ecx, [esp+arg_0]
0x41F13F: mov     [eax+10h], ecx
0x41F142: retn    4
