0x9EAB00: fld     ds:flt_A3D65C
0x9EAB06: push    ecx
0x9EAB07: fstp    [esp+4+var_4]; float
0x9EAB0A: push    offset aFactorweaponde; "fActorWeaponDesirabilityDamageMult"
0x9EAB0F: mov     ecx, offset fActorWeaponDesirabilityDamageMult
0x9EAB14: call    GameSetting_ConstrAndReg_float
0x9EAB19: push    offset sub_A1EE70; void (__cdecl *)()
0x9EAB1E: call    _atexit
0x9EAB23: pop     ecx
0x9EAB24: retn
