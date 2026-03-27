0x9EA640: fld     ds:flt_A5982C
0x9EA646: push    ecx
0x9EA647: fstp    [esp+4+var_4]; float
0x9EA64A: push    offset aFaiupdatemovem; "fAIUpdateMovementRestrictionsDistance"
0x9EA64F: mov     ecx, offset flt_B372C8
0x9EA654: call    GameSetting_ConstrAndReg_float
0x9EA659: push    offset sub_A1ECB0; void (__cdecl *)()
0x9EA65E: call    _atexit
0x9EA663: pop     ecx
0x9EA664: retn
