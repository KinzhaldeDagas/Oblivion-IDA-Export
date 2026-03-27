0x41E960: push    5Bh ; '['; a2
0x41E962: call    BaseExtraList_GetExtraData
0x41E967: test    eax, eax
0x41E969: jz      short loc_41E972
0x41E96B: mov     eax, [eax+0Ch]
0x41E96E: test    eax, eax
0x41E970: jnz     short locret_41E974
0x41E972: xor     eax, eax
0x41E974: retn
