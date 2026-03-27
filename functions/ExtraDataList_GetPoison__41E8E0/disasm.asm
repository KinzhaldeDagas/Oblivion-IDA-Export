0x41E8E0: push    48h ; 'H'; a2
0x41E8E2: call    BaseExtraList_GetExtraData
0x41E8E7: test    eax, eax
0x41E8E9: jz      short loc_41E8EF
0x41E8EB: mov     eax, [eax+0Ch]
0x41E8EE: retn
0x41E8EF: xor     eax, eax
0x41E8F1: retn
