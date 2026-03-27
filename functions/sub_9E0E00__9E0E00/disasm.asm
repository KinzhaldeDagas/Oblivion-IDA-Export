0x9E0E00: fld     ds:flt_A41724
0x9E0E06: push    ecx
0x9E0E07: fstp    [esp+4+var_4]; float
0x9E0E0A: push    offset aFaidefaultd_12; "fAIDefaultDodgeBackNoAttackMult"
0x9E0E0F: mov     ecx, offset flt_B356D0
0x9E0E14: call    GameSetting_ConstrAndReg_float
0x9E0E19: push    offset sub_A1ACD0; void (__cdecl *)()
0x9E0E1E: call    _atexit
0x9E0E23: pop     ecx
0x9E0E24: retn
