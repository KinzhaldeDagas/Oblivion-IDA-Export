0x9EEA10: fld     ds:flt_A41328
0x9EEA16: push    ecx
0x9EEA17: fstp    [esp+4+var_4]; float
0x9EEA1A: push    offset aFmagicclouds_0; "fMagicCloudSpeedScale"
0x9EEA1F: mov     ecx, offset flt_B37F00
0x9EEA24: call    GameSetting_ConstrAndReg_float
0x9EEA29: push    offset sub_A20520; void (__cdecl *)()
0x9EEA2E: call    _atexit
0x9EEA33: pop     ecx
0x9EEA34: retn
