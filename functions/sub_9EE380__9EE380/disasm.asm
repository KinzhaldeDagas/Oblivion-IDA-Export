0x9EE380: fld     ds:flt_A2FAAC
0x9EE386: push    ecx
0x9EE387: fstp    [esp+4+var_4]; float
0x9EE38A: push    offset aFmagiccastersk; "fMagicCasterSkillCostBase"
0x9EE38F: mov     ecx, offset fMagicCasterSkillCostBase
0x9EE394: call    GameSetting_ConstrAndReg_float
0x9EE399: push    offset sub_A202F0; void (__cdecl *)()
0x9EE39E: call    _atexit
0x9EE3A3: pop     ecx
0x9EE3A4: retn
