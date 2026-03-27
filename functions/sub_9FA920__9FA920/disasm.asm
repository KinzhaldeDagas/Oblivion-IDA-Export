0x9FA920: fld1
0x9FA922: push    ecx
0x9FA923: fstp    [esp+4+var_4]; float
0x9FA926: mov     ecx, offset flt_B3A498
0x9FA92B: push    offset aFpathpointfail; "fPathPointFailureTimeLimit"
0x9FA930: call    GameSetting_ConstrAndReg_float
0x9FA935: push    offset sub_A24160; void (__cdecl *)()
0x9FA93A: call    _atexit
0x9FA93F: pop     ecx
0x9FA940: retn
