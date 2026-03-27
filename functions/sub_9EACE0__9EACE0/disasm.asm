0x9EACE0: fld     ds:flt_A59CB8
0x9EACE6: push    ecx
0x9EACE7: fstp    [esp+4+var_4]; float
0x9EACEA: push    offset aFmovecharwal_0; "fMoveCharWalkMax"
0x9EACEF: mov     ecx, offset fMoveCharWalkMax
0x9EACF4: call    GameSetting_ConstrAndReg_float
0x9EACF9: push    offset sub_A1EF10; void (__cdecl *)()
0x9EACFE: call    _atexit
0x9EAD03: pop     ecx
0x9EAD04: retn
