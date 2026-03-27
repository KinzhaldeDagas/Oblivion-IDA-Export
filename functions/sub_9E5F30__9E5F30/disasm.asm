0x9E5F30: fld     ds:flt_A3744C
0x9E5F36: push    ecx
0x9E5F37: fstp    [esp+4+var_4]; float
0x9E5F3A: push    offset aFweatherflasha; "fWeatherFlashAmbient"
0x9E5F3F: mov     ecx, offset flt_B36650
0x9E5F44: call    GameSetting_ConstrAndReg_float
0x9E5F49: push    offset sub_A1D370; void (__cdecl *)()
0x9E5F4E: call    _atexit
0x9E5F53: pop     ecx
0x9E5F54: retn
