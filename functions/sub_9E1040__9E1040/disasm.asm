0x9E1040: fld     ds:flt_A31E2C
0x9E1046: push    ecx
0x9E1047: fstp    [esp+4+var_4]; float
0x9E104A: push    offset aFaidefaultpo_1; "fAIDefaultPowerAttackFatigueBase"
0x9E104F: mov     ecx, offset flt_B35730
0x9E1054: call    GameSetting_ConstrAndReg_float
0x9E1059: push    offset sub_A1AD90; void (__cdecl *)()
0x9E105E: call    _atexit
0x9E1063: pop     ecx
0x9E1064: retn
