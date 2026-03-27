0x9E5E40: fld     ds:flt_A41304
0x9E5E46: push    ecx
0x9E5E47: fstp    [esp+4+var_4]; float
0x9E5E4A: push    offset aFweathertransm; "fWeatherTransMax"
0x9E5E4F: mov     ecx, offset flt_B36628
0x9E5E54: call    GameSetting_ConstrAndReg_float
0x9E5E59: push    offset sub_A1D320; void (__cdecl *)()
0x9E5E5E: call    _atexit
0x9E5E63: pop     ecx
0x9E5E64: retn
