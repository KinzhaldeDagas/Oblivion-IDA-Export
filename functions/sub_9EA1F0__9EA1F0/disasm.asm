0x9EA1F0: fldz
0x9EA1F2: push    ecx
0x9EA1F3: fstp    [esp+4+var_4]; float
0x9EA1F6: mov     ecx, offset flt_B371F0
0x9EA1FB: push    offset aFdeathforcedam; "fDeathForceDamageMin"
0x9EA200: call    GameSetting_ConstrAndReg_float
0x9EA205: push    offset sub_A1EB00; void (__cdecl *)()
0x9EA20A: call    _atexit
0x9EA20F: pop     ecx
0x9EA210: retn
