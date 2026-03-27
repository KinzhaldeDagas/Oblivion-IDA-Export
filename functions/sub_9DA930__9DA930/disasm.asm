0x9DA930: push    63h ; 'c'
0x9DA932: push    offset aIlocklevelma_0; "iLockLevelMaxVeryHard"
0x9DA937: mov     ecx, offset iLockLevelMaxVeryHard
0x9DA93C: call    GameSetting_ConstrAndReg
0x9DA941: push    offset sub_A179D0; void (__cdecl *)()
0x9DA946: call    _atexit
0x9DA94B: pop     ecx
0x9DA94C: retn
