0x9E5EA0: fld     ds:flt_A46B10
0x9E5EA6: push    ecx
0x9E5EA7: fstp    [esp+4+var_4]; float
0x9E5EAA: push    offset aFweathertransa; "fWeatherTransAccel"
0x9E5EAF: mov     ecx, offset flt_B36638
0x9E5EB4: call    GameSetting_ConstrAndReg_float
0x9E5EB9: push    offset sub_A1D340; void (__cdecl *)()
0x9E5EBE: call    _atexit
0x9E5EC3: pop     ecx
0x9E5EC4: retn
