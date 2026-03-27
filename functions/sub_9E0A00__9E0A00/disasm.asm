0x9E0A00: fld     ds:flt_A31E2C
0x9E0A06: push    ecx
0x9E0A07: fstp    [esp+4+var_4]; float
0x9E0A0A: push    offset aFaidefaultpowe; "fAIDefaultPowerAttackRecoilStaggerBonus"
0x9E0A0F: mov     ecx, offset flt_B35618
0x9E0A14: call    GameSetting_ConstrAndReg_float
0x9E0A19: push    offset sub_A1AB60; void (__cdecl *)()
0x9E0A1E: call    _atexit
0x9E0A23: pop     ecx
0x9E0A24: retn
