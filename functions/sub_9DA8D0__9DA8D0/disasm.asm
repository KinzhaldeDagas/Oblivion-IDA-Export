0x9DA8D0: push    14h
0x9DA8D2: push    offset aIlocklevelmaxe; "iLockLevelMaxEasy"
0x9DA8D7: mov     ecx, offset iLockLevelMaxEasy
0x9DA8DC: call    GameSetting_ConstrAndReg
0x9DA8E1: push    offset sub_A179A0; void (__cdecl *)()
0x9DA8E6: call    _atexit
0x9DA8EB: pop     ecx
0x9DA8EC: retn
