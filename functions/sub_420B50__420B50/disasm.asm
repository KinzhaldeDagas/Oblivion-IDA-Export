0x420B50: push    9; a2
0x420B52: call    BaseExtraList_GetExtraData
0x420B57: test    eax, eax
0x420B59: jz      short loc_420B5F
0x420B5B: mov     eax, [eax+0Ch]
0x420B5E: retn
0x420B5F: xor     eax, eax
0x420B61: retn
