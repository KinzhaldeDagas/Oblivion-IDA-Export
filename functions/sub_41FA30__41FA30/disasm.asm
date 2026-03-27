0x41FA30: push    0Ah; a2
0x41FA32: call    BaseExtraList_GetExtraData
0x41FA37: test    eax, eax
0x41FA39: jnz     short loc_41FA3C
0x41FA3B: retn
0x41FA3C: mov     eax, [eax+0Ch]
0x41FA3F: retn
