0x9ED720: fld1
0x9ED722: push    ecx
0x9ED723: fstp    [esp+4+var_4]; float
0x9ED726: mov     ecx, offset fDifficultyMaxValue
0x9ED72B: push    offset aFdifficultymax; "fDifficultyMaxValue"
0x9ED730: call    GameSetting_ConstrAndReg_float
0x9ED735: push    offset sub_A1FE10; void (__cdecl *)()
0x9ED73A: call    _atexit
0x9ED73F: pop     ecx
0x9ED740: retn
