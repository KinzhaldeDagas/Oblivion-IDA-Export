0x9FA740: fld     ds:flt_A427E0
0x9FA746: push    ecx
0x9FA747: fstp    [esp+4+var_4]; float
0x9FA74A: push    offset aFpathpointstar; "fPathPointStartCheckDistance"
0x9FA74F: mov     ecx, offset flt_B3A448
0x9FA754: call    GameSetting_ConstrAndReg_float
0x9FA759: push    offset sub_A240C0; void (__cdecl *)()
0x9FA75E: call    _atexit
0x9FA763: pop     ecx
0x9FA764: retn
