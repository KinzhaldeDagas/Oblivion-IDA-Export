0x9EEDD0: fld     ds:flt_A3D9A4
0x9EEDD6: push    ecx
0x9EEDD7: fstp    [esp+4+var_4]; float
0x9EEDDA: push    offset aFmagicsundam_0; "fMagicSunDamageWaterScale"
0x9EEDDF: mov     ecx, offset fMagicSunDamageWaterScale
0x9EEDE4: call    GameSetting_ConstrAndReg_float
0x9EEDE9: push    offset sub_A20660; void (__cdecl *)()
0x9EEDEE: call    _atexit
0x9EEDF3: pop     ecx
0x9EEDF4: retn
