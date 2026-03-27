0x41E6B0: push    32h ; '2'; a2
0x41E6B2: call    BaseExtraList_GetExtraData
0x41E6B7: test    eax, eax
0x41E6B9: jz      short loc_41E6BF
0x41E6BB: mov     eax, [eax+0Ch]
0x41E6BE: retn
0x41E6BF: xor     eax, eax
0x41E6C1: retn
