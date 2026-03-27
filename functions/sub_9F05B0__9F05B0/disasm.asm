0x9F05B0: push    offset aAssaults; "Assaults: "
0x9F05B5: push    offset aSmiscnumassaul; "sMiscNumAssaults"
0x9F05BA: mov     ecx, offset sMiscNumAssaults
0x9F05BF: call    GameSetting_ConstrAndReg
0x9F05C4: push    offset sub_A20FD0; void (__cdecl *)()
0x9F05C9: call    _atexit
0x9F05CE: pop     ecx
0x9F05CF: retn
