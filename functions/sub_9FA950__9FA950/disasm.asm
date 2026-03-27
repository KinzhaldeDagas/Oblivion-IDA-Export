0x9FA950: fld     ds:flt_A37CC8
0x9FA956: push    ecx
0x9FA957: fstp    [esp+4+var_4]; float
0x9FA95A: push    offset aFpathavoidance; "fPathAvoidanceCreatureIntLimit"
0x9FA95F: mov     ecx, offset flt_B3A4A0
0x9FA964: call    GameSetting_ConstrAndReg_float
0x9FA969: push    offset sub_A24170; void (__cdecl *)()
0x9FA96E: call    _atexit
0x9FA973: pop     ecx
0x9FA974: retn
