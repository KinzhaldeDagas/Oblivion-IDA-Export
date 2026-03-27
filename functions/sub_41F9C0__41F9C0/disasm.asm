0x41F9C0: push    0Bh; a2
0x41F9C2: call    BaseExtraList_GetExtraData
0x41F9C7: test    eax, eax
0x41F9C9: jnz     short loc_41F9CC
0x41F9CB: retn
0x41F9CC: movsx   eax, byte ptr [eax+0Ch]
0x41F9D0: retn
