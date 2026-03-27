0x9EF300: fld     ds:flt_A41724
0x9EF306: push    ecx
0x9EF307: fstp    [esp+4+var_4]; float
0x9EF30A: push    offset aFmagictelek_10; "fMagicTelekinesisComplexObjectDamping"
0x9EF30F: mov     ecx, offset fMagicTelekinesisComplexObjectDamping
0x9EF314: call    GameSetting_ConstrAndReg_float
0x9EF319: push    offset sub_A20820; void (__cdecl *)()
0x9EF31E: call    _atexit
0x9EF323: pop     ecx
0x9EF324: retn
