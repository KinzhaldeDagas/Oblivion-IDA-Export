0x9EFB50: fld     ds:dword_A46C30
0x9EFB56: push    ecx
0x9EFB57: fstp    [esp+4+var_4]; float
0x9EFB5A: push    offset aFabsorbbolts_0; "fAbsorbBoltsRadiusStrength"
0x9EFB5F: mov     ecx, offset fAbsorbBoltsRadiusStrength
0x9EFB64: call    GameSetting_ConstrAndReg_float
0x9EFB69: push    offset sub_A20B20; void (__cdecl *)()
0x9EFB6E: call    _atexit
0x9EFB73: pop     ecx
0x9EFB74: retn
