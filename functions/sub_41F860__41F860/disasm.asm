0x41F860: push    13h; a2
0x41F862: call    BaseExtraList_GetExtraData
0x41F867: test    eax, eax
0x41F869: jnz     short loc_41F86C
0x41F86B: retn
0x41F86C: mov     eax, [eax+10h]
0x41F86F: retn
