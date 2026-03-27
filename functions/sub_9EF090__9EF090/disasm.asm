0x9EF090: fld     ds:flt_A31C80
0x9EF096: push    ecx
0x9EF097: fstp    [esp+4+var_4]; float
0x9EF09A: push    offset aFmagiclighthei; "fMagicLightHeightOffset"
0x9EF09F: mov     ecx, offset fMagicLightHeightOffset
0x9EF0A4: call    GameSetting_ConstrAndReg_float
0x9EF0A9: push    offset sub_A20750; void (__cdecl *)()
0x9EF0AE: call    _atexit
0x9EF0B3: pop     ecx
0x9EF0B4: retn
