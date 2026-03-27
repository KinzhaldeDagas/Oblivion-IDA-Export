0x9E6B40: fld     ds:flt_A30634
0x9E6B46: push    ecx
0x9E6B47: fstp    [esp+4+var_4]; float
0x9E6B4A: push    offset aFfightdispmult; "fFightDispMult"
0x9E6B4F: mov     ecx, offset fFightDispMult
0x9E6B54: call    GameSetting_ConstrAndReg_float
0x9E6B59: push    offset sub_A1D7B0; void (__cdecl *)()
0x9E6B5E: call    _atexit
0x9E6B63: pop     ecx
0x9E6B64: retn
