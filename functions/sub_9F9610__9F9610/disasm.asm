0x9F9610: fld     ds:flt_A41304
0x9F9616: push    ecx
0x9F9617: fstp    [esp+4+var_4]; float
0x9F961A: push    offset aFupdateinterva; "fUpdateInterval"
0x9F961F: mov     ecx, offset flt_B3A024
0x9F9624: call    GameSetting_ConstrAndReg_float
0x9F9629: push    offset sub_A23890; void (__cdecl *)()
0x9F962E: call    _atexit
0x9F9633: pop     ecx
0x9F9634: retn
