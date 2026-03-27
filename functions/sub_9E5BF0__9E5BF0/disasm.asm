0x9E5BF0: fld     ds:flt_A2FAAC
0x9E5BF6: push    ecx
0x9E5BF7: fstp    [esp+4+var_4]; float
0x9E5BFA: push    offset aFweatherclouds; "fWeatherCloudSpeedMax"
0x9E5BFF: mov     ecx, offset fWeatherCloudSpeedMax
0x9E5C04: call    GameSetting_ConstrAndReg_float
0x9E5C09: push    offset sub_A1D250; void (__cdecl *)()
0x9E5C0E: call    _atexit
0x9E5C13: pop     ecx
0x9E5C14: retn
