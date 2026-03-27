0x9FAA10: fld     ds:flt_A3F420
0x9FAA16: push    ecx
0x9FAA17: fstp    [esp+4+var_4]; float
0x9FAA1A: push    offset aFpathpointtu_1; "fPathPointTurningSpeed"
0x9FAA1F: mov     ecx, offset flt_B3A4C0
0x9FAA24: call    GameSetting_ConstrAndReg_float
0x9FAA29: push    offset sub_A241B0; void (__cdecl *)()
0x9FAA2E: call    _atexit
0x9FAA33: pop     ecx
0x9FAA34: retn
