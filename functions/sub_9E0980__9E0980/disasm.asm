0x9E0980: fld     ds:flt_A31E2C
0x9E0986: push    ecx
0x9E0987: fstp    [esp+4+var_4]; float
0x9E098A: push    offset aFaidefaultat_0; "fAIDefaultAttackDuringUnconsciousBonus"
0x9E098F: mov     ecx, offset flt_B35600
0x9E0994: call    GameSetting_ConstrAndReg_float
0x9E0999: push    offset sub_A1AB30; void (__cdecl *)()
0x9E099E: call    _atexit
0x9E09A3: pop     ecx
0x9E09A4: retn
