0x41FB40: push    1Fh; a2
0x41FB42: call    BaseExtraList_GetExtraData
0x41FB47: test    eax, eax
0x41FB49: jz      short loc_41FB4F
0x41FB4B: mov     eax, [eax+10h]
0x41FB4E: retn
0x41FB4F: xor     eax, eax
0x41FB51: retn
