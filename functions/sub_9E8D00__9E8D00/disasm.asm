0x9E8D00: fld     ds:flt_A46B10
0x9E8D06: push    ecx
0x9E8D07: fstp    [esp+4+var_4]; float
0x9E8D0A: push    offset aFdamagepower_0; "fDamagePowerAttackStandBonus"
0x9E8D0F: mov     ecx, offset fDamagePowerAttackStandBonus
0x9E8D14: call    GameSetting_ConstrAndReg_float
0x9E8D19: push    offset sub_A1E370; void (__cdecl *)()
0x9E8D1E: call    _atexit
0x9E8D23: pop     ecx
0x9E8D24: retn
