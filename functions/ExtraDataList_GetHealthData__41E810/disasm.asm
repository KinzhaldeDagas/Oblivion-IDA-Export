0x41E810: push    2Bh ; '+'; a2
0x41E812: call    BaseExtraList_GetExtraData
0x41E817: test    eax, eax
0x41E819: jz      short loc_41E81F
0x41E81B: fld     dword ptr [eax+0Ch]
0x41E81E: retn
0x41E81F: fld     ds:flt_A30634
0x41E825: retn
