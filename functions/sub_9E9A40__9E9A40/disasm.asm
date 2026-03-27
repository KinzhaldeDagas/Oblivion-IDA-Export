0x9E9A40: fld     ds:flt_A58FF8
0x9E9A46: push    ecx
0x9E9A47: fstp    [esp+4+var_4]; float
0x9E9A4A: push    offset aFarrowgravitym; "fArrowGravityMult"
0x9E9A4F: mov     ecx, offset flt_B37070
0x9E9A54: call    GameSetting_ConstrAndReg_float
0x9E9A59: push    offset sub_A1E800; void (__cdecl *)()
0x9E9A5E: call    _atexit
0x9E9A63: pop     ecx
0x9E9A64: retn
