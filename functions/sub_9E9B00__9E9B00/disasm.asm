0x9E9B00: fld     ds:flt_A34BA0
0x9E9B06: push    ecx
0x9E9B07: fstp    [esp+4+var_4]; float
0x9E9B0A: push    offset aFarrowweakspee; "fArrowWeakSpeed"
0x9E9B0F: mov     ecx, offset flt_B37090
0x9E9B14: call    GameSetting_ConstrAndReg_float
0x9E9B19: push    offset sub_A1E840; void (__cdecl *)()
0x9E9B1E: call    _atexit
0x9E9B23: pop     ecx
0x9E9B24: retn
