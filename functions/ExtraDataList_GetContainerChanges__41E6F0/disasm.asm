0x41E6F0: push    1Ah; a2
0x41E6F2: call    BaseExtraList_GetExtraData
0x41E6F7: test    eax, eax
0x41E6F9: jz      short loc_41E6FF
0x41E6FB: mov     eax, [eax+0Ch]
0x41E6FE: retn
0x41E6FF: xor     eax, eax
0x41E701: retn
