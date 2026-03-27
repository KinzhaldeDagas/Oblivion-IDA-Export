0x4211C0: push    4Bh ; 'K'; a2
0x4211C2: call    BaseExtraList_GetExtraData
0x4211C7: test    eax, eax
0x4211C9: jz      short loc_4211CF
0x4211CB: mov     eax, [eax+14h]
0x4211CE: retn
0x4211CF: xor     eax, eax
0x4211D1: retn
