0x41E980: push    52h ; 'R'; a2
0x41E982: call    BaseExtraList_GetExtraData
0x41E987: test    eax, eax
0x41E989: jnz     short loc_41E98C
0x41E98B: retn
0x41E98C: mov     eax, [eax+0Ch]
0x41E98F: retn
