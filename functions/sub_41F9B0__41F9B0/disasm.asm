0x41F9B0: push    8; a2
0x41F9B2: call    BaseExtraList_GetExtraData
0x41F9B7: test    eax, eax
0x41F9B9: jnz     short loc_41F9BC
0x41F9BB: retn
0x41F9BC: mov     eax, [eax+0Ch]
0x41F9BF: retn
