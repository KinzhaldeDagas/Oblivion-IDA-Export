0x41F070: push    4Fh ; 'O'; a2
0x41F072: call    BaseExtraList_GetExtraData
0x41F077: test    eax, eax
0x41F079: jz      short loc_41F07F
0x41F07B: mov     eax, [eax+0Ch]
0x41F07E: retn
0x41F07F: xor     eax, eax
0x41F081: retn
