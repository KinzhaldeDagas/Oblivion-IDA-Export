0x4D8D70: add     ecx, 44h ; 'D'; this
0x4D8D73: call    ExtraDataList_GetContainerChanges
0x4D8D78: mov     ecx, eax
0x4D8D7A: xor     eax, eax
0x4D8D7C: test    ecx, ecx
0x4D8D7E: jz      short locret_4D8D85
0x4D8D80: jmp     sub_487D20
0x4D8D85: retn    8
