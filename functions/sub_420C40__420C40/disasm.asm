0x420C40: push    4Ch ; 'L'; Returns ExtraNorthRotation's float payload (type 0x4C), or 0.0.
0x420C42: call    BaseExtraList_GetExtraData
0x420C47: test    eax, eax
0x420C49: jz      short loc_420C4F
0x420C4B: fld     dword ptr [eax+0Ch]
0x420C4E: retn
0x420C4F: fldz
0x420C51: retn
