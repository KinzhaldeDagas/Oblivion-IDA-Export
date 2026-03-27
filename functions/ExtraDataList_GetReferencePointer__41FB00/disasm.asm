0x41FB00: push    22h ; '"'; a2
0x41FB02: call    BaseExtraList_GetExtraData
0x41FB07: test    eax, eax
0x41FB09: jz      short loc_41FB0F
0x41FB0B: mov     eax, [eax+0Ch]
0x41FB0E: retn
0x41FB0F: xor     eax, eax
0x41FB11: retn
