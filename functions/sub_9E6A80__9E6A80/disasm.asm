0x9E6A80: fld     ds:flt_A3D65C
0x9E6A86: push    ecx
0x9E6A87: fstp    [esp+4+var_4]; float
0x9E6A8A: push    offset aFdisptargetf_1; "fDispTargetFactionRankMult"
0x9E6A8F: mov     ecx, offset fDispTargetFactionRankMult
0x9E6A94: call    GameSetting_ConstrAndReg_float
0x9E6A99: push    offset sub_A1D770; void (__cdecl *)()
0x9E6A9E: call    _atexit
0x9E6AA3: pop     ecx
0x9E6AA4: retn
