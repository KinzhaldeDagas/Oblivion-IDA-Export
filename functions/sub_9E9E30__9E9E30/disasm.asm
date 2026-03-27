0x9E9E30: fld     ds:flt_A45128
0x9E9E36: push    ecx
0x9E9E37: fstp    [esp+4+var_4]; float
0x9E9E3A: push    offset aFenemyhealthba; "fEnemyHealthBarTimer"
0x9E9E3F: mov     ecx, offset fEnemyHealthBarTimer
0x9E9E44: call    GameSetting_ConstrAndReg_float
0x9E9E49: push    offset sub_A1E960; void (__cdecl *)()
0x9E9E4E: call    _atexit
0x9E9E53: pop     ecx
0x9E9E54: retn
