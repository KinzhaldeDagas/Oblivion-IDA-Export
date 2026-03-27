0x41E6D0: push    33h ; '3'; a2
0x41E6D2: call    BaseExtraList_GetExtraData
0x41E6D7: test    eax, eax
0x41E6D9: jz      short loc_41E6DF
0x41E6DB: mov     eax, [eax+0Ch]
0x41E6DE: retn
0x41E6DF: xor     eax, eax
0x41E6E1: retn
