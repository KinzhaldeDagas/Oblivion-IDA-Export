0x41E630: push    15h; a2
0x41E632: call    BaseExtraList_GetExtraData
0x41E637: test    eax, eax
0x41E639: jz      short loc_41E63F
0x41E63B: mov     eax, [eax+0Ch]
0x41E63E: retn
0x41E63F: xor     eax, eax
0x41E641: retn
