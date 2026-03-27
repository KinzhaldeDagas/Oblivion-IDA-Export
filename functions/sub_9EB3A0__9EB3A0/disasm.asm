0x9EB3A0: push    50h ; 'P'
0x9EB3A2: push    offset aIhorseturnde_0; "iHorseTurnDegreesRampUpPerSecond"
0x9EB3A7: mov     ecx, offset iHorseTurnDegreesRampUpPerSecond
0x9EB3AC: call    GameSetting_ConstrAndReg
0x9EB3B1: push    offset sub_A1F160; void (__cdecl *)()
0x9EB3B6: call    _atexit
0x9EB3BB: pop     ecx
0x9EB3BC: retn
