0x9E9360: fld     ds:flt_A34BA0
0x9E9366: push    ecx
0x9E9367: fstp    [esp+4+var_4]; float
0x9E936A: push    offset aFcombatspeakta; "fCombatSpeakTauntChance"
0x9E936F: mov     ecx, offset flt_B36F48
0x9E9374: call    GameSetting_ConstrAndReg_float
0x9E9379: push    offset sub_A1E5B0; void (__cdecl *)()
0x9E937E: call    _atexit
0x9E9383: pop     ecx
0x9E9384: retn
