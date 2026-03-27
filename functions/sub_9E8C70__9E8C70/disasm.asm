0x9E8C70: fld     ds:flt_A34BA0
0x9E8C76: push    ecx
0x9E8C77: fstp    [esp+4+var_4]; float
0x9E8C7A: push    offset aFdamagetoweapo; "fDamageToWeaponPercentage"
0x9E8C7F: mov     ecx, offset fDamageToWeaponPercentage
0x9E8C84: call    GameSetting_ConstrAndReg_float
0x9E8C89: push    offset sub_A1E340; void (__cdecl *)()
0x9E8C8E: call    _atexit
0x9E8C93: pop     ecx
0x9E8C94: retn
