0x9E0C50: fld     ds:flt_A34A80
0x9E0C56: push    ecx
0x9E0C57: fstp    [esp+4+var_4]; float
0x9E0C5A: push    offset aFaidefaultrang; "fAIDefaultRangedStandoffDistance"
0x9E0C5F: mov     ecx, offset fAIDefaultRangedStandoffDistance
0x9E0C64: call    GameSetting_ConstrAndReg_float
0x9E0C69: push    offset sub_A1AC40; void (__cdecl *)()
0x9E0C6E: call    _atexit
0x9E0C73: pop     ecx
0x9E0C74: retn
