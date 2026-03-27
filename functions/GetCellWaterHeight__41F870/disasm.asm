0x41F870: push    4; a2
0x41F872: call    BaseExtraList_GetExtraData
0x41F877: test    eax, eax
0x41F879: jnz     short loc_41F87E
0x41F87B: fldz
0x41F87D: retn
0x41F87E: fld     dword ptr [eax+0Ch]
0x41F881: retn
