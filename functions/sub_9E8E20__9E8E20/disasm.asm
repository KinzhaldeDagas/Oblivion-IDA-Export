0x9E8E20: fld1
0x9E8E22: push    ecx
0x9E8E23: fstp    [esp+4+var_4]; float
0x9E8E26: mov     ecx, offset fHandDamageSkillMult
0x9E8E2B: push    offset aFhanddamages_0; "fHandDamageSkillMult"
0x9E8E30: call    GameSetting_ConstrAndReg_float
0x9E8E35: push    offset sub_A1E3D0; void (__cdecl *)()
0x9E8E3A: call    _atexit
0x9E8E3F: pop     ecx
0x9E8E40: retn
