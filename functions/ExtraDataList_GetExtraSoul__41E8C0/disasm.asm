0x41E8C0: push    2Fh ; '/'; a2
0x41E8C2: call    BaseExtraList_GetExtraData
0x41E8C7: test    eax, eax
0x41E8C9: jz      short loc_41E8D0
0x41E8CB: movsx   eax, byte ptr [eax+0Ch]
0x41E8CF: retn
0x41E8D0: xor     eax, eax
0x41E8D2: retn
