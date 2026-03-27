0x420760: push    24h ; '$'; a2
0x420762: call    BaseExtraList_GetExtraData
0x420767: test    eax, eax
0x420769: jz      short loc_42076F
0x42076B: mov     eax, [eax+0Ch]
0x42076E: retn
0x42076F: xor     eax, eax
0x420771: retn
