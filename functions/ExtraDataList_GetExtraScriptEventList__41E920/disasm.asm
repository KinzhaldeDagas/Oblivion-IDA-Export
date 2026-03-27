0x41E920: push    12h; a2
0x41E922: call    BaseExtraList_GetExtraData
0x41E927: test    eax, eax
0x41E929: jz      short loc_41E92F
0x41E92B: mov     eax, [eax+10h]
0x41E92E: retn
0x41E92F: xor     eax, eax
0x41E931: retn
