0x41FB80: push    1Fh; a2
0x41FB82: call    BaseExtraList_GetExtraData
0x41FB87: test    eax, eax
0x41FB89: jz      short loc_41FB8F
0x41FB8B: mov     al, [eax+18h]
0x41FB8E: retn
0x41FB8F: xor     al, al
0x41FB91: retn
