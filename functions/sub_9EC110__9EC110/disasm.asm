0x9EC110: fld     ds:flt_A30634
0x9EC116: push    ecx
0x9EC117: fstp    [esp+4+var_4]; float
0x9EC11A: push    offset aFpersjokeconf; "fPersJokeConf"
0x9EC11F: mov     ecx, offset fPersJokeConf
0x9EC124: call    GameSetting_ConstrAndReg_float
0x9EC129: push    offset sub_A1F650; void (__cdecl *)()
0x9EC12E: call    _atexit
0x9EC133: pop     ecx
0x9EC134: retn
