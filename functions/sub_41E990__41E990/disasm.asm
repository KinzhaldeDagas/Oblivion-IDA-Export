0x41E990: push    38h ; '8'; a2
0x41E992: call    BaseExtraList_GetExtraData
0x41E997: test    eax, eax
0x41E999: jnz     short loc_41E99E
0x41E99B: or      al, 0FFh
0x41E99D: retn
0x41E99E: mov     al, [eax+0Ch]
0x41E9A1: retn
