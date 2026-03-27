0x9E6B10: fld     ds:flt_A3D8F0
0x9E6B16: push    ecx
0x9E6B17: fstp    [esp+4+var_4]; float
0x9E6B1A: push    offset aFfightdispbase; "fFightDispBase"
0x9E6B1F: mov     ecx, offset fFightDispBase
0x9E6B24: call    GameSetting_ConstrAndReg_float
0x9E6B29: push    offset sub_A1D7A0; void (__cdecl *)()
0x9E6B2E: call    _atexit
0x9E6B33: pop     ecx
0x9E6B34: retn
