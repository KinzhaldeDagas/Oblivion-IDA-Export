0x4212C0: push    4Bh ; 'K'; a2
0x4212C2: call    BaseExtraList_GetExtraData
0x4212C7: test    eax, eax
0x4212C9: jz      short loc_4212CF
0x4212CB: mov     eax, [eax+18h]
0x4212CE: retn
0x4212CF: xor     eax, eax
0x4212D1: retn
