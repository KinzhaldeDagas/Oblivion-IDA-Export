0x9EAB30: fld     ds:flt_A31C80
0x9EAB36: push    ecx
0x9EAB37: fstp    [esp+4+var_4]; float
0x9EAB3A: push    offset aFactorweapon_0; "fActorWeaponDesirabilitySkillMult"
0x9EAB3F: mov     ecx, offset fActorWeaponDesirabilitySkillMult
0x9EAB44: call    GameSetting_ConstrAndReg_float
0x9EAB49: push    offset sub_A1EE80; void (__cdecl *)()
0x9EAB4E: call    _atexit
0x9EAB53: pop     ecx
0x9EAB54: retn
