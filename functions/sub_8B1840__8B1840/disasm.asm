0x8B1840: mov     eax, [esp+Count]
0x8B1844: test    eax, eax
0x8B1846: jz      short locret_8B1851
0x8B1848: mov     [esp+Count], eax; Count
0x8B184C: jmp     _strncpy
0x8B1851: retn
