0x9E8F70: fld     ds:flt_A3D65C
0x9E8F76: push    ecx
0x9E8F77: fstp    [esp+4+var_4]; float
0x9E8F7A: push    offset aFhandreachmult; "fHandReachMult"
0x9E8F7F: mov     ecx, offset fHandReachMult
0x9E8F84: call    GameSetting_ConstrAndReg_float
0x9E8F89: push    offset sub_A1E440; void (__cdecl *)()
0x9E8F8E: call    _atexit
0x9E8F93: pop     ecx
0x9E8F94: retn
