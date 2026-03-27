0x9F95B0: push    32h ; '2'
0x9F95B2: push    offset aIlowdamp; "iLowDamp"
0x9F95B7: mov     ecx, offset dword_B3A00C
0x9F95BC: call    GameSetting_ConstrAndReg
0x9F95C1: push    offset sub_A23860; void (__cdecl *)()
0x9F95C6: call    _atexit
0x9F95CB: pop     ecx
0x9F95CC: retn
