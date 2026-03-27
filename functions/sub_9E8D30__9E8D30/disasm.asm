0x9E8D30: fld     ds:dword_A46C30
0x9E8D36: push    ecx
0x9E8D37: fstp    [esp+4+var_4]; float
0x9E8D3A: push    offset aFdamagepower_1; "fDamagePowerAttackSideBonus"
0x9E8D3F: mov     ecx, offset fDamagePowerAttackSideBonus
0x9E8D44: call    GameSetting_ConstrAndReg_float
0x9E8D49: push    offset sub_A1E380; void (__cdecl *)()
0x9E8D4E: call    _atexit
0x9E8D53: pop     ecx
0x9E8D54: retn
