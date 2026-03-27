0x748010: mov     eax, [esp+Count]
0x748014: mov     ecx, [esp+Src]
0x748018: push    eax; Count
0x748019: push    ecx; Src
0x74801A: mov     ecx, [esp+8+arg_0]
0x74801E: call    NiFile_DirectWrite
0x748023: retn
