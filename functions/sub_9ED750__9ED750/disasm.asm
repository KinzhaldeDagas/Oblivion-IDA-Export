0x9ED750: fldz
0x9ED752: push    ecx
0x9ED753: fstp    [esp+4+var_4]; float
0x9ED756: mov     ecx, offset fDifficultyDefaultValue
0x9ED75B: push    offset aFdifficultydef; "fDifficultyDefaultValue"
0x9ED760: call    GameSetting_ConstrAndReg_float
0x9ED765: push    offset sub_A1FE20; void (__cdecl *)()
0x9ED76A: call    _atexit
0x9ED76F: pop     ecx
0x9ED770: retn
