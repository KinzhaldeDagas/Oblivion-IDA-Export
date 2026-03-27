0x9DA910: push    50h ; 'P'
0x9DA912: push    offset aIlocklevelmaxh; "iLockLevelMaxHard"
0x9DA917: mov     ecx, offset iLockLevelMaxHard
0x9DA91C: call    GameSetting_ConstrAndReg
0x9DA921: push    offset sub_A179C0; void (__cdecl *)()
0x9DA926: call    _atexit
0x9DA92B: pop     ecx
0x9DA92C: retn
