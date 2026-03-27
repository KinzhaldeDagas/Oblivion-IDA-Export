0x9EA820: fld     ds:flt_A599B4
0x9EA826: push    ecx
0x9EA827: fstp    [esp+4+var_4]; float
0x9EA82A: push    offset aFcheckposition; "fCheckPositionFallDistance"
0x9EA82F: mov     ecx, offset flt_B37328
0x9EA834: call    GameSetting_ConstrAndReg_float
0x9EA839: push    offset sub_A1ED70; void (__cdecl *)()
0x9EA83E: call    _atexit
0x9EA843: pop     ecx
0x9EA844: retn
