0x420380: push    3Fh ; '?'; a2
0x420382: call    BaseExtraList_GetExtraData
0x420387: test    eax, eax
0x420389: jz      short locret_420392
0x42038B: mov     cl, [esp+arg_0]
0x42038F: mov     [eax+10h], cl
0x420392: retn    4
