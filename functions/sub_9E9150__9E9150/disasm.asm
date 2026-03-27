0x9E9150: fld1
0x9E9152: push    ecx
0x9E9153: fstp    [esp+4+var_4]; float
0x9E9156: mov     ecx, offset fBlockSkillMult
0x9E915B: push    offset aFblockskillmul; "fBlockSkillMult"
0x9E9160: call    GameSetting_ConstrAndReg_float
0x9E9165: push    offset sub_A1E500; void (__cdecl *)()
0x9E916A: call    _atexit
0x9E916F: pop     ecx
0x9E9170: retn
