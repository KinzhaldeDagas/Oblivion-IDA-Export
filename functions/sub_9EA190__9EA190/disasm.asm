0x9EA190: fld     ds:flt_A56F44
0x9EA196: push    ecx
0x9EA197: fstp    [esp+4+var_4]; float
0x9EA19A: push    offset aFdeathforcefor; "fDeathForceForceMin"
0x9EA19F: mov     ecx, offset flt_B371E0
0x9EA1A4: call    GameSetting_ConstrAndReg_float
0x9EA1A9: push    offset sub_A1EAE0; void (__cdecl *)()
0x9EA1AE: call    _atexit
0x9EA1B3: pop     ecx
0x9EA1B4: retn
