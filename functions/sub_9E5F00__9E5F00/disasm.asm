0x9E5F00: fld1
0x9E5F02: push    ecx
0x9E5F03: fstp    [esp+4+var_4]; float
0x9E5F06: mov     ecx, offset flt_B36648
0x9E5F0B: push    offset aFweatherflas_0; "fWeatherFlashDirectional"
0x9E5F10: call    GameSetting_ConstrAndReg_float
0x9E5F15: push    offset sub_A1D360; void (__cdecl *)()
0x9E5F1A: call    _atexit
0x9E5F1F: pop     ecx
0x9E5F20: retn
