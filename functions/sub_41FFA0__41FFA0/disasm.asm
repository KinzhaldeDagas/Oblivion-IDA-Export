0x41FFA0: push    19h; a2
0x41FFA2: call    BaseExtraList_GetExtraData
0x41FFA7: test    eax, eax
0x41FFA9: jz      short loc_41FFAF
0x41FFAB: mov     eax, [eax+0Ch]
0x41FFAE: retn
0x41FFAF: xor     eax, eax
0x41FFB1: retn
