0x9DA5E0: fld     ds:flt_A34ABC
0x9DA5E6: push    ecx
0x9DA5E7: fstp    [esp+4+var_4]; float
0x9DA5EA: push    offset aFmagicfogoptim; "fMagicFogOptimalDistance"
0x9DA5EF: mov     ecx, offset fMagicFogOptimalDistance
0x9DA5F4: call    GameSetting_ConstrAndReg_float
0x9DA5F9: push    offset sub_A17860; void (__cdecl *)()
0x9DA5FE: call    _atexit
0x9DA603: pop     ecx
0x9DA604: retn
