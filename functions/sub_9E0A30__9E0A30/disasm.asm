0x9E0A30: fld     ds:flt_A31E2C
0x9E0A36: push    ecx
0x9E0A37: fstp    [esp+4+var_4]; float
0x9E0A3A: push    offset aFaidefaultpo_0; "fAIDefaultPowerAttackUnconsciousBonus"
0x9E0A3F: mov     ecx, offset flt_B35620
0x9E0A44: call    GameSetting_ConstrAndReg_float
0x9E0A49: push    offset sub_A1AB70; void (__cdecl *)()
0x9E0A4E: call    _atexit
0x9E0A53: pop     ecx
0x9E0A54: retn
