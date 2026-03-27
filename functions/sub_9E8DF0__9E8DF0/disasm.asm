0x9E8DF0: fldz
0x9E8DF2: push    ecx
0x9E8DF3: fstp    [esp+4+var_4]; float
0x9E8DF6: mov     ecx, offset fHandDamageSkillBase
0x9E8DFB: push    offset aFhanddamageski; "fHandDamageSkillBase"
0x9E8E00: call    GameSetting_ConstrAndReg_float
0x9E8E05: push    offset sub_A1E3C0; void (__cdecl *)()
0x9E8E0A: call    _atexit
0x9E8E0F: pop     ecx
0x9E8E10: retn
