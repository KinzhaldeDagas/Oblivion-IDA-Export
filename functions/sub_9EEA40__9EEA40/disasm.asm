0x9EEA40: fld     ds:fConstant_2
0x9EEA46: push    ecx
0x9EEA47: fstp    [esp+4+var_4]; float
0x9EEA4A: push    offset aFmagiccloudsiz; "fMagicCloudSizeScale"
0x9EEA4F: mov     ecx, offset flt_B37F08
0x9EEA54: call    GameSetting_ConstrAndReg_float
0x9EEA59: push    offset sub_A20530; void (__cdecl *)()
0x9EEA5E: call    _atexit
0x9EEA63: pop     ecx
0x9EEA64: retn
