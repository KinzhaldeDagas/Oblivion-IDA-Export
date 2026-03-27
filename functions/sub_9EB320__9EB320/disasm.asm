0x9EB320: fld     ds:flt_A3D65C
0x9EB326: push    ecx
0x9EB327: fstp    [esp+4+var_4]; float
0x9EB32A: push    offset aFperklightar_2; "fPerkLightArmorJourneymanDamageMult"
0x9EB32F: mov     ecx, offset fPerkLightArmorJourneymanDamageMult
0x9EB334: call    GameSetting_ConstrAndReg_float
0x9EB339: push    offset sub_A1F130; void (__cdecl *)()
0x9EB33E: call    _atexit
0x9EB343: pop     ecx
0x9EB344: retn
