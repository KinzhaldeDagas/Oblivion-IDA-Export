0x9DA8F0: push    28h ; '('
0x9DA8F2: push    offset aIlocklevelmaxa; "iLockLevelMaxAverage"
0x9DA8F7: mov     ecx, offset iLockLevelMaxAverage
0x9DA8FC: call    GameSetting_ConstrAndReg
0x9DA901: push    offset sub_A179B0; void (__cdecl *)()
0x9DA906: call    _atexit
0x9DA90B: pop     ecx
0x9DA90C: retn
