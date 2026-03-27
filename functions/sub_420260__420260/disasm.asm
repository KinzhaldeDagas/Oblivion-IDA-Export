0x420260: push    3Fh ; '?'; a2
0x420262: call    BaseExtraList_GetExtraData
0x420267: test    eax, eax
0x420269: jz      short loc_42026F
0x42026B: mov     eax, [eax+0Ch]
0x42026E: retn
0x42026F: xor     eax, eax
0x420271: retn
