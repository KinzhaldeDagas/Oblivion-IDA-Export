0x9E0F80: fld     ds:flt_A417B4
0x9E0F86: push    ecx
0x9E0F87: fstp    [esp+4+var_4]; float
0x9E0F8A: push    offset aFaidefaultat_3; "fAIDefaultAttackSkillMult"
0x9E0F8F: mov     ecx, offset flt_B35710
0x9E0F94: call    GameSetting_ConstrAndReg_float
0x9E0F99: push    offset sub_A1AD50; void (__cdecl *)()
0x9E0F9E: call    _atexit
0x9E0FA3: pop     ecx
0x9E0FA4: retn
