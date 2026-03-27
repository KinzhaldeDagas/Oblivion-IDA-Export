0x420D20: push    4Dh ; 'M'; a2
0x420D22: call    BaseExtraList_GetExtraData
0x420D27: test    eax, eax
0x420D29: jz      short loc_420D2F
0x420D2B: mov     eax, [eax+0Ch]
0x420D2E: retn
0x420D2F: xor     eax, eax
0x420D31: retn
