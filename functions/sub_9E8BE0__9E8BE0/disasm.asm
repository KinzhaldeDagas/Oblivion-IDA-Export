0x9E8BE0: fld1
0x9E8BE2: push    ecx
0x9E8BE3: fstp    [esp+4+var_4]; float
0x9E8BE6: mov     ecx, offset fDamageWeaponConditionMult
0x9E8BEB: push    offset aFdamageweapo_0; "fDamageWeaponConditionMult"
0x9E8BF0: call    GameSetting_ConstrAndReg_float
0x9E8BF5: push    offset sub_A1E310; void (__cdecl *)()
0x9E8BFA: call    _atexit
0x9E8BFF: pop     ecx
0x9E8C00: retn
