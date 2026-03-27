0x41E940: push    37h ; '7'; a2
0x41E942: call    BaseExtraList_GetExtraData
0x41E947: test    eax, eax
0x41E949: jz      short loc_41E94F
0x41E94B: fld     dword ptr [eax+0Ch]
0x41E94E: retn
0x41E94F: fld1
0x41E951: retn
