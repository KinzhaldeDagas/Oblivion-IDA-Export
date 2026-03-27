0x41FB60: push    1Fh; a2
0x41FB62: call    BaseExtraList_GetExtraData
0x41FB67: test    eax, eax
0x41FB69: jz      short loc_41FB6F
0x41FB6B: mov     eax, [eax+14h]
0x41FB6E: retn
0x41FB6F: xor     eax, eax
0x41FB71: retn
