0x9EE950: fld     ds:flt_A45128
0x9EE956: push    ecx
0x9EE957: fstp    [esp+4+var_4]; float
0x9EE95A: push    offset aFmagicareasc_1; "fMagicAreaScaleMin"
0x9EE95F: mov     ecx, offset flt_B37EE0
0x9EE964: call    GameSetting_ConstrAndReg_float
0x9EE969: push    offset sub_A204E0; void (__cdecl *)()
0x9EE96E: call    _atexit
0x9EE973: pop     ecx
0x9EE974: retn
