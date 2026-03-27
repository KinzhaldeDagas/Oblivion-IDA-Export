0x420A70: push    10h; a2
0x420A72: call    BaseExtraList_GetExtraData
0x420A77: test    eax, eax
0x420A79: jz      short loc_420A7F
0x420A7B: mov     eax, [eax+0Ch]
0x420A7E: retn
0x420A7F: xor     eax, eax
0x420A81: retn
