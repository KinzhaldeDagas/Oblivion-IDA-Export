0x9F95D0: push    50h ; 'P'
0x9F95D2: push    offset aIhighdamp; "iHighDamp"
0x9F95D7: mov     ecx, offset dword_B3A014
0x9F95DC: call    GameSetting_ConstrAndReg
0x9F95E1: push    offset sub_A23870; void (__cdecl *)()
0x9F95E6: call    _atexit
0x9F95EB: pop     ecx
0x9F95EC: retn
