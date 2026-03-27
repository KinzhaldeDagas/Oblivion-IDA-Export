0x41E650: push    30h ; '0'; a2
0x41E652: call    BaseExtraList_GetExtraData
0x41E657: test    eax, eax
0x41E659: jz      short loc_41E65F
0x41E65B: mov     eax, [eax+0Ch]
0x41E65E: retn
0x41E65F: xor     eax, eax
0x41E661: retn
