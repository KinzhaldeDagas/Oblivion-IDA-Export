0x9E9950: fld     ds:flt_A430CC
0x9E9956: push    ecx
0x9E9957: fstp    [esp+4+var_4]; float
0x9E995A: push    offset aFarrowagemax; "fArrowAgeMax"
0x9E995F: mov     ecx, offset flt_B37048
0x9E9964: call    GameSetting_ConstrAndReg_float
0x9E9969: push    offset sub_A1E7B0; void (__cdecl *)()
0x9E996E: call    _atexit
0x9E9973: pop     ecx
0x9E9974: retn
