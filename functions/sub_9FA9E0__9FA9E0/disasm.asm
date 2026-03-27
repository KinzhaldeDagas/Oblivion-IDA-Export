0x9FA9E0: fld     ds:flt_A31E2C
0x9FA9E6: push    ecx
0x9FA9E7: fstp    [esp+4+var_4]; float
0x9FA9EA: push    offset aFpathavoidan_2; "fPathAvoidanceTimeOut"
0x9FA9EF: mov     ecx, offset fPathAvoidanceTimeOut
0x9FA9F4: call    GameSetting_ConstrAndReg_float
0x9FA9F9: push    offset sub_A241A0; void (__cdecl *)()
0x9FA9FE: call    _atexit
0x9FAA03: pop     ecx
0x9FAA04: retn
