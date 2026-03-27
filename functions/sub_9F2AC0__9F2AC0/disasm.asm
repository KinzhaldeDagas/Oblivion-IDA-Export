0x9F2AC0: push    offset aDone_0; "Done"
0x9F2AC5: push    offset aSdone; "sDone"
0x9F2ACA: mov     ecx, offset sDone
0x9F2ACF: call    GameSetting_ConstrAndReg
0x9F2AD4: push    offset sub_A22190; void (__cdecl *)()
0x9F2AD9: call    _atexit
0x9F2ADE: pop     ecx
0x9F2ADF: retn
