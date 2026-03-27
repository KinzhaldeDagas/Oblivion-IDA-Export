0x41E8A0: push    2Eh ; '.'; a2
0x41E8A2: call    BaseExtraList_GetExtraData
0x41E8A7: test    eax, eax
0x41E8A9: jz      short loc_41E8AF
0x41E8AB: fld     dword ptr [eax+0Ch]
0x41E8AE: retn
0x41E8AF: fld     ds:flt_A30634
0x41E8B5: retn
