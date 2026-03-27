0x9ED6F0: fld     ds:flt_A30634
0x9ED6F6: push    ecx
0x9ED6F7: fstp    [esp+4+var_4]; float
0x9ED6FA: push    offset aFdifficultymin; "fDifficultyMinValue"
0x9ED6FF: mov     ecx, offset fDifficultyMinValue
0x9ED704: call    GameSetting_ConstrAndReg_float
0x9ED709: push    offset sub_A1FE00; void (__cdecl *)()
0x9ED70E: call    _atexit
0x9ED713: pop     ecx
0x9ED714: retn
