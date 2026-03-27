0x9EC140: fld     ds:fConstant_2
0x9EC146: push    ecx
0x9EC147: fstp    [esp+4+var_4]; float
0x9EC14A: push    offset aFpersjokeener; "fPersJokeEner"
0x9EC14F: mov     ecx, offset fPersJokeEner
0x9EC154: call    GameSetting_ConstrAndReg_float
0x9EC159: push    offset sub_A1F660; void (__cdecl *)()
0x9EC15E: call    _atexit
0x9EC163: pop     ecx
0x9EC164: retn
