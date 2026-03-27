0x41E7F0: push    29h ; ')'; a2
0x41E7F2: call    BaseExtraList_GetExtraData
0x41E7F7: test    eax, eax
0x41E7F9: jz      short loc_41E7FF
0x41E7FB: mov     eax, [eax+0Ch]
0x41E7FE: retn
0x41E7FF: or      eax, 0FFFFFFFFh
0x41E802: retn
