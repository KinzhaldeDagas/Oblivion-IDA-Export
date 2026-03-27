0x9E8BB0: fldz
0x9E8BB2: push    ecx
0x9E8BB3: fstp    [esp+4+var_4]; float
0x9E8BB6: mov     ecx, offset fDamageWeaponConditionBase
0x9E8BBB: push    offset aFdamageweaponc; "fDamageWeaponConditionBase"
0x9E8BC0: call    GameSetting_ConstrAndReg_float
0x9E8BC5: push    offset sub_A1E300; void (__cdecl *)()
0x9E8BCA: call    _atexit
0x9E8BCF: pop     ecx
0x9E8BD0: retn
