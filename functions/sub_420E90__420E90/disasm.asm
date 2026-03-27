0x420E90: push    4Eh ; 'N'; a2
0x420E92: call    BaseExtraList_GetExtraData
0x420E97: test    eax, eax
0x420E99: jz      short locret_420EA2
0x420E9B: mov     ecx, eax
0x420E9D: jmp     loc_42AFF0
0x420EA2: retn    4
