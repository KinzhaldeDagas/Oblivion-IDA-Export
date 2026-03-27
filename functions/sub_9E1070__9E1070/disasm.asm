0x9E1070: fld     ds:flt_A418D8
0x9E1076: push    ecx
0x9E1077: fstp    [esp+4+var_4]; float
0x9E107A: push    offset aFaidefaultpo_2; "fAIDefaultPowerAttackFatigueMult"
0x9E107F: mov     ecx, offset flt_B35738
0x9E1084: call    GameSetting_ConstrAndReg_float
0x9E1089: push    offset sub_A1ADA0; void (__cdecl *)()
0x9E108E: call    _atexit
0x9E1093: pop     ecx
0x9E1094: retn
