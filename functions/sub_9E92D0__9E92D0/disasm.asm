0x9E92D0: fld     ds:flt_A2FFE8
0x9E92D6: push    ecx
0x9E92D7: fstp    [esp+4+var_4]; float
0x9E92DA: push    offset aFcombatstepadv; "fCombatStepAdvanceDistance"
0x9E92DF: mov     ecx, offset fCombatStepAdvanceDistance
0x9E92E4: call    GameSetting_ConstrAndReg_float
0x9E92E9: push    offset sub_A1E580; void (__cdecl *)()
0x9E92EE: call    _atexit
0x9E92F3: pop     ecx
0x9E92F4: retn
