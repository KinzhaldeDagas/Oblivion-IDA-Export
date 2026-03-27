0x41E7D0: push    28h ; '('; a2
0x41E7D2: call    BaseExtraList_GetExtraData
0x41E7D7: test    eax, eax
0x41E7D9: jz      short loc_41E7DF
0x41E7DB: mov     eax, [eax+0Ch]
0x41E7DE: retn
0x41E7DF: xor     eax, eax
0x41E7E1: retn
