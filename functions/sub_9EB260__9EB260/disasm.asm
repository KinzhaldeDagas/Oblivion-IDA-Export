0x9EB260: fldz
0x9EB262: push    ecx
0x9EB263: fstp    [esp+4+var_4]; float
0x9EB266: mov     ecx, offset fPerkLightArmorExpertSpeedMult
0x9EB26B: push    offset aFperklightar_0; "fPerkLightArmorExpertSpeedMult"
0x9EB270: call    GameSetting_ConstrAndReg_float
0x9EB275: push    offset sub_A1F0F0; void (__cdecl *)()
0x9EB27A: call    _atexit
0x9EB27F: pop     ecx
0x9EB280: retn
