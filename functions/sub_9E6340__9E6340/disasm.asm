0x9E6340: fld     ds:flt_A379CC
0x9E6346: push    ecx
0x9E6347: fstp    [esp+4+var_4]; float
0x9E634A: push    offset aFsneaktargetin; "fSneakTargetInCombatBonus"
0x9E634F: mov     ecx, offset fSneakTargetInCombatBonus
0x9E6354: call    GameSetting_ConstrAndReg_float
0x9E6359: push    offset sub_A1D4F0; void (__cdecl *)()
0x9E635E: call    _atexit
0x9E6363: pop     ecx
0x9E6364: retn
