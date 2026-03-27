0x9E7E40: fld     ds:flt_A31C80
0x9E7E46: push    ecx
0x9E7E47: fstp    [esp+4+var_4]; float
0x9E7E4A: push    offset aFvanitymodeymu; "fVanityModeYMult"
0x9E7E4F: mov     ecx, offset flt_B36B90
0x9E7E54: call    GameSetting_ConstrAndReg_float
0x9E7E59: push    offset sub_A1DE40; void (__cdecl *)()
0x9E7E5E: call    _atexit
0x9E7E63: pop     ecx
0x9E7E64: retn
