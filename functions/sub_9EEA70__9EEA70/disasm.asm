0x9EEA70: fld     ds:flt_A3D9A4
0x9EEA76: push    ecx
0x9EEA77: fstp    [esp+4+var_4]; float
0x9EEA7A: push    offset aFmagiccloudslo; "fMagicCloudSlowdownRate"
0x9EEA7F: mov     ecx, offset flt_B37F10
0x9EEA84: call    GameSetting_ConstrAndReg_float
0x9EEA89: push    offset sub_A20540; void (__cdecl *)()
0x9EEA8E: call    _atexit
0x9EEA93: pop     ecx
0x9EEA94: retn
