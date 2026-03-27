0x9FA860: fld     ds:flt_A31C80
0x9FA866: push    ecx
0x9FA867: fstp    [esp+4+var_4]; float
0x9FA86A: push    offset aFpathpointre_0; "fPathPointReachDistanceError"
0x9FA86F: mov     ecx, offset flt_B3A478
0x9FA874: call    GameSetting_ConstrAndReg_float
0x9FA879: push    offset sub_A24120; void (__cdecl *)()
0x9FA87E: call    _atexit
0x9FA883: pop     ecx
0x9FA884: retn
