0x41FF40: push    36h ; '6'; a2
0x41FF42: call    BaseExtraList_GetExtraData
0x41FF47: test    eax, eax
0x41FF49: jz      short locret_41FF52
0x41FF4B: mov     cl, [esp+arg_0]
0x41FF4F: mov     [eax+10h], cl
0x41FF52: retn    4
