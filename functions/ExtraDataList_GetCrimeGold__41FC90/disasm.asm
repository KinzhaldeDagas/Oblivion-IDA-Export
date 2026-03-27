0x41FC90: push    3Dh ; '='; a2
0x41FC92: call    BaseExtraList_GetExtraData
0x41FC97: test    eax, eax
0x41FC99: jz      short loc_41FC9F
0x41FC9B: fld     dword ptr [eax+0Ch]
0x41FC9E: retn
0x41FC9F: fldz
0x41FCA1: retn
