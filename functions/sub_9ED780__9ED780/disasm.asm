0x9ED780: fld     ds:flt_A31C80
0x9ED786: push    ecx
0x9ED787: fstp    [esp+4+var_4]; float
0x9ED78A: push    offset aFdifficultydam; "fDifficultyDamageMultiplier"
0x9ED78F: mov     ecx, offset fDifficultyDamageMultiplier
0x9ED794: call    GameSetting_ConstrAndReg_float
0x9ED799: push    offset sub_A1FE30; void (__cdecl *)()
0x9ED79E: call    _atexit
0x9ED7A3: pop     ecx
0x9ED7A4: retn
