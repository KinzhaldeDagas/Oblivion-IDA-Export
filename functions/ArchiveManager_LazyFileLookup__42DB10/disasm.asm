0x42DB10: mov     edx, [esp+arg_0]
0x42DB14: mov     ecx, FirstLoadedArchiveByType[edx*4]
0x42DB1B: xor     eax, eax
0x42DB1D: test    ecx, ecx
0x42DB1F: jnz     short loc_42DB2C
0x42DB21: mov     ecx, dword_B3390C[edx*4]
0x42DB28: test    ecx, ecx
0x42DB2A: jz      short locret_42DB40
0x42DB2C: mov     eax, [esp+arg_C]
0x42DB30: mov     edx, [esp+arg_8]
0x42DB34: push    eax
0x42DB35: mov     eax, [esp+4+arg_4]
0x42DB39: push    edx
0x42DB3A: push    eax
0x42DB3B: call    Archive_GetFileEntry
0x42DB40: retn
