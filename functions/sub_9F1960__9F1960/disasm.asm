0x9F1960: push    offset aLockLevel; "Lock Level"
0x9F1965: push    offset aSlockleveltext; "sLockLevelText"
0x9F196A: mov     ecx, offset sLockLevelText
0x9F196F: call    GameSetting_ConstrAndReg
0x9F1974: push    offset sub_A219A0; void (__cdecl *)()
0x9F1979: call    _atexit
0x9F197E: pop     ecx
0x9F197F: retn
