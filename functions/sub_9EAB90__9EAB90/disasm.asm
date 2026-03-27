0x9EAB90: fld     ds:flt_A31C80
0x9EAB96: push    ecx
0x9EAB97: fstp    [esp+4+var_4]; float
0x9EAB9A: push    offset aFactorarmord_0; "fActorArmorDesirabilitySkillMult"
0x9EAB9F: mov     ecx, offset unk_B373C0
0x9EABA4: call    GameSetting_ConstrAndReg_float
0x9EABA9: push    offset sub_A1EEA0; void (__cdecl *)()
0x9EABAE: call    _atexit
0x9EABB3: pop     ecx
0x9EABB4: retn
