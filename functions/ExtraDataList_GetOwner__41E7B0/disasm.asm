0x41E7B0: push    27h ; '''; a2
0x41E7B2: call    BaseExtraList_GetExtraData
0x41E7B7: test    eax, eax
0x41E7B9: jz      short loc_41E7BF
0x41E7BB: mov     eax, [eax+0Ch]
0x41E7BE: retn
0x41E7BF: xor     eax, eax
0x41E7C1: retn
