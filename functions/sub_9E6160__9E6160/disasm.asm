0x9E6160: fld     ds:flt_A46B10
0x9E6166: push    ecx
0x9E6167: fstp    [esp+4+var_4]; float
0x9E616A: push    offset aFsunreduceglar; "fSunReduceGlareSpeed"
0x9E616F: mov     ecx, offset flt_B366B8
0x9E6174: call    GameSetting_ConstrAndReg_float
0x9E6179: push    offset sub_A1D430; void (__cdecl *)()
0x9E617E: call    _atexit
0x9E6183: pop     ecx
0x9E6184: retn
