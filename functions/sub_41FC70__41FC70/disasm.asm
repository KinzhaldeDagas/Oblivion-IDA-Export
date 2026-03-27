0x41FC70: push    20h ; ' '; a2
0x41FC72: call    BaseExtraList_GetExtraData
0x41FC77: test    eax, eax
0x41FC79: jz      short loc_41FC7F
0x41FC7B: mov     eax, [eax+0Ch]
0x41FC7E: retn
0x41FC7F: xor     eax, eax
0x41FC81: retn
