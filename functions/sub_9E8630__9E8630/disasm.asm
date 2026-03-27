0x9E8630: fld     ds:fConstant_2
0x9E8636: push    ecx
0x9E8637: fstp    [esp+4+var_4]; float
0x9E863A: push    offset aFaimeleeweapon; "fAIMeleeWeaponMult"
0x9E863F: mov     ecx, offset fAIMeleeWeaponMult
0x9E8644: call    GameSetting_ConstrAndReg_float
0x9E8649: push    offset sub_A1E120; void (__cdecl *)()
0x9E864E: call    _atexit
0x9E8653: pop     ecx
0x9E8654: retn
