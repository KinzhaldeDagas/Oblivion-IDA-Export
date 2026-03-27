0x41FF80: push    11h; a2
0x41FF82: call    BaseExtraList_GetExtraData
0x41FF87: test    eax, eax
0x41FF89: jz      short loc_41FF8F
0x41FF8B: mov     eax, [eax+0Ch]
0x41FF8E: retn
0x41FF8F: xor     eax, eax
0x41FF91: retn
