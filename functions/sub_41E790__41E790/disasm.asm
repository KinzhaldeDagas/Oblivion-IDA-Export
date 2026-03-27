0x41E790: push    26h ; '&'; a2
0x41E792: call    BaseExtraList_GetExtraData
0x41E797: test    eax, eax
0x41E799: jz      short loc_41E79F
0x41E79B: mov     eax, [eax+0Ch]
0x41E79E: retn
0x41E79F: xor     eax, eax
0x41E7A1: retn
