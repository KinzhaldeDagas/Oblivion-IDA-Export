0x9E5E70: fld     ds:flt_A34BA0
0x9E5E76: push    ecx
0x9E5E77: fstp    [esp+4+var_4]; float
0x9E5E7A: push    offset aFweathertran_0; "fWeatherTransMin"
0x9E5E7F: mov     ecx, offset flt_B36630
0x9E5E84: call    GameSetting_ConstrAndReg_float
0x9E5E89: push    offset sub_A1D330; void (__cdecl *)()
0x9E5E8E: call    _atexit
0x9E5E93: pop     ecx
0x9E5E94: retn
