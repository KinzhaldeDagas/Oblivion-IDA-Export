0x9EEE00: fld     ds:flt_A3D9A4
0x9EEE06: push    ecx
0x9EEE07: fstp    [esp+4+var_4]; float
0x9EEE0A: push    offset aFmagicsundam_1; "fMagicSunDamageSunHiddenScale"
0x9EEE0F: mov     ecx, offset fMagicSunDamageSunHiddenScale
0x9EEE14: call    GameSetting_ConstrAndReg_float
0x9EEE19: push    offset sub_A20670; void (__cdecl *)()
0x9EEE1E: call    _atexit
0x9EEE23: pop     ecx
0x9EEE24: retn
