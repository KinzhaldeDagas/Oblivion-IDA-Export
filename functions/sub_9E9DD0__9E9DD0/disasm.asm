0x9E9DD0: fld     ds:flt_A342A4
0x9E9DD6: push    ecx
0x9E9DD7: fstp    [esp+4+var_4]; float
0x9E9DDA: push    offset aFarrowoptimald; "fArrowOptimalDistance"
0x9E9DDF: mov     ecx, offset fArrowOptimalDistance
0x9E9DE4: call    GameSetting_ConstrAndReg_float
0x9E9DE9: push    offset sub_A1E940; void (__cdecl *)()
0x9E9DEE: call    _atexit
0x9E9DF3: pop     ecx
0x9E9DF4: retn
