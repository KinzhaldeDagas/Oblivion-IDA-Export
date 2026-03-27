0x41FB20: push    1Fh; a2
0x41FB22: call    BaseExtraList_GetExtraData
0x41FB27: test    eax, eax
0x41FB29: jz      short loc_41FB2F
0x41FB2B: mov     eax, [eax+0Ch]
0x41FB2E: retn
0x41FB2F: xor     eax, eax
0x41FB31: retn
