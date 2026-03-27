0x41E860: push    2Ah ; '*'; a2
0x41E862: call    BaseExtraList_GetExtraData
0x41E867: test    eax, eax
0x41E869: jz      short loc_41E870
0x41E86B: mov     ax, [eax+0Ch]
0x41E86F: retn
0x41E870: mov     ax, 1
0x41E874: retn
