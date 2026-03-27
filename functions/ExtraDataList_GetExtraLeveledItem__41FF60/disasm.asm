0x41FF60: push    36h ; '6'; a2
0x41FF62: call    BaseExtraList_GetExtraData
0x41FF67: test    eax, eax
0x41FF69: jz      short loc_41FF6F
0x41FF6B: mov     eax, [eax+0Ch]
0x41FF6E: retn
0x41FF6F: or      eax, 0FFFFFFFFh
0x41FF72: retn
