0x9EB290: fld     ds:flt_A35AA4
0x9EB296: push    ecx
0x9EB297: fstp    [esp+4+var_4]; float
0x9EB29A: push    offset aFperklightar_1; "fPerkLightArmorNoviceDamageMult"
0x9EB29F: mov     ecx, offset fPerkLightArmorNoviceDamageMult
0x9EB2A4: call    GameSetting_ConstrAndReg_float
0x9EB2A9: push    offset sub_A1F100; void (__cdecl *)()
0x9EB2AE: call    _atexit
0x9EB2B3: pop     ecx
0x9EB2B4: retn
