0x9EFA40: fld     ds:flt_A427E4
0x9EFA46: push    ecx
0x9EFA47: fstp    [esp+4+var_4]; float
0x9EFA4A: push    offset aFshockbranchse; "fShockBranchSegmentLength"
0x9EFA4F: mov     ecx, offset fShockBranchSegmentLength
0x9EFA54: call    GameSetting_ConstrAndReg_float
0x9EFA59: push    offset sub_A20AC0; void (__cdecl *)()
0x9EFA5E: call    _atexit
0x9EFA63: pop     ecx
0x9EFA64: retn
