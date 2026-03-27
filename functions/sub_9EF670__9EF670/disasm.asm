0x9EF670: fld     ds:flt_A3F514
0x9EF676: push    ecx
0x9EF677: fstp    [esp+4+var_4]; float
0x9EF67A: push    offset aFshockboltslen; "fShockBoltsLength"
0x9EF67F: mov     ecx, offset fShockBoltsLength
0x9EF684: call    GameSetting_ConstrAndReg_float
0x9EF689: push    offset sub_A20960; void (__cdecl *)()
0x9EF68E: call    _atexit
0x9EF693: pop     ecx
0x9EF694: retn
