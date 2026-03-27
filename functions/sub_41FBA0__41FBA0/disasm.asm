0x41FBA0: push    1Fh; a2
0x41FBA2: call    BaseExtraList_GetExtraData
0x41FBA7: test    eax, eax
0x41FBA9: jz      short loc_41FBAF
0x41FBAB: mov     al, [eax+19h]
0x41FBAE: retn
0x41FBAF: xor     al, al
0x41FBB1: retn
