0x9E98F0: fld     ds:flt_A31C80
0x9E98F6: push    ecx
0x9E98F7: fstp    [esp+4+var_4]; float
0x9E98FA: push    offset aFaicombatflees; "fAICombatFleeScoreThreshold"
0x9E98FF: mov     ecx, offset flt_B37038
0x9E9904: call    GameSetting_ConstrAndReg_float
0x9E9909: push    offset sub_A1E790; void (__cdecl *)()
0x9E990E: call    _atexit
0x9E9913: pop     ecx
0x9E9914: retn
