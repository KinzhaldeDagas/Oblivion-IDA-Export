0x404FF0: mov     eax, [esp+arg_0]
0x404FF4: test    eax, eax
0x404FF6: jz      short locret_40500E
0x404FF8: mov     eax, [eax+4]
0x404FFB: test    eax, eax
0x404FFD: jz      short locret_40500E
0x404FFF: mov     [esp+arg_0], eax
0x405003: add     ecx, 10Ch
0x405009: jmp     NiTMap_RemoveAt
0x40500E: retn    4
