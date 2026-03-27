0x9E9120: fldz
0x9E9122: push    ecx
0x9E9123: fstp    [esp+4+var_4]; float
0x9E9126: mov     ecx, offset fBlockSkillBase
0x9E912B: push    offset aFblockskillbas; "fBlockSkillBase"
0x9E9130: call    GameSetting_ConstrAndReg_float
0x9E9135: push    offset sub_A1E4F0; void (__cdecl *)()
0x9E913A: call    _atexit
0x9E913F: pop     ecx
0x9E9140: retn
