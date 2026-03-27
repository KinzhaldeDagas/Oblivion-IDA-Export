0x9E9330: fld     ds:flt_A3D65C
0x9E9336: push    ecx
0x9E9337: fstp    [esp+4+var_4]; float
0x9E933A: push    offset aFcombatspeakpo; "fCombatSpeakPowerAttackChance"
0x9E933F: mov     ecx, offset fCombatSpeakPowerAttackChance
0x9E9344: call    GameSetting_ConstrAndReg_float
0x9E9349: push    offset sub_A1E5A0; void (__cdecl *)()
0x9E934E: call    _atexit
0x9E9353: pop     ecx
0x9E9354: retn
