0x9EFA70: fld     ds:flt_A417B4
0x9EFA76: push    ecx
0x9EFA77: fstp    [esp+4+var_4]; float
0x9EFA7A: push    offset aFshockbranch_1; "fShockBranchSegmentVariance"
0x9EFA7F: mov     ecx, offset fShockBranchSegmentVariance
0x9EFA84: call    GameSetting_ConstrAndReg_float
0x9EFA89: push    offset sub_A20AD0; void (__cdecl *)()
0x9EFA8E: call    _atexit
0x9EFA93: pop     ecx
0x9EFA94: retn
