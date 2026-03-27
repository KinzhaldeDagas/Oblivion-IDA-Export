0x4204C0: push    5; a2
0x4204C2: call    BaseExtraList_GetExtraData
0x4204C7: test    eax, eax
0x4204C9: jz      short loc_4204CF
0x4204CB: mov     eax, [eax+0Ch]
0x4204CE: retn
0x4204CF: xor     eax, eax
0x4204D1: retn
