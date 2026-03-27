0x9EAAB0: fld     ds:flt_A3F424
0x9EAAB6: push    ecx
0x9EAAB7: fstp    [esp+4+var_4]; float
0x9EAABA: push    offset aFarmorweightli; "fArmorWeightLightMaxMod"
0x9EAABF: mov     ecx, offset fArmorWeightLightMaxMod
0x9EAAC4: call    GameSetting_ConstrAndReg_float
0x9EAAC9: push    offset sub_A1EE50; void (__cdecl *)()
0x9EAACE: call    _atexit
0x9EAAD3: pop     ecx
0x9EAAD4: retn
