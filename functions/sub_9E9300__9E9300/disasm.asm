0x9E9300: fld     ds:flt_A2FAAC
0x9E9306: push    ecx
0x9E9307: fstp    [esp+4+var_4]; float
0x9E930A: push    offset aFcombatspeakat; "fCombatSpeakAttackChance"
0x9E930F: mov     ecx, offset fCombatSpeakAttackChance
0x9E9314: call    GameSetting_ConstrAndReg_float
0x9E9319: push    offset sub_A1E590; void (__cdecl *)()
0x9E931E: call    _atexit
0x9E9323: pop     ecx
0x9E9324: retn
