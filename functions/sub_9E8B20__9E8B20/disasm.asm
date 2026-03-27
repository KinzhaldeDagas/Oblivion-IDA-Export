0x9E8B20: fld1
0x9E8B22: push    ecx
0x9E8B23: fstp    [esp+4+var_4]; float
0x9E8B26: mov     ecx, offset fDamageWeaponMult
0x9E8B2B: push    offset aFdamageweaponm; "fDamageWeaponMult"
0x9E8B30: call    GameSetting_ConstrAndReg_float
0x9E8B35: push    offset sub_A1E2D0; void (__cdecl *)()
0x9E8B3A: call    _atexit
0x9E8B3F: pop     ecx
0x9E8B40: retn
