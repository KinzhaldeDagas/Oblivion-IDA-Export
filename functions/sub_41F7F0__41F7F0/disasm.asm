0x41F7F0: push    53h ; 'S'; a2
0x41F7F2: call    BaseExtraList_GetExtraData
0x41F7F7: test    eax, eax
0x41F7F9: jz      short loc_41F7FF
0x41F7FB: mov     eax, [eax+0Ch]
0x41F7FE: retn
0x41F7FF: xor     eax, eax
0x41F801: retn
