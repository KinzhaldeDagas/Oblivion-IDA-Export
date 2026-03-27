0x41E900: push    12h; a2
0x41E902: call    BaseExtraList_GetExtraData
0x41E907: test    eax, eax
0x41E909: jz      short loc_41E90F
0x41E90B: mov     eax, [eax+0Ch]
0x41E90E: retn
0x41E90F: xor     eax, eax
0x41E911: retn
