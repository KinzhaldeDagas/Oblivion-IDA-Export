0x9E5D30: fld     ds:flt_A468E8
0x9E5D36: push    ecx
0x9E5D37: fstp    [esp+4+var_4]; float
0x9E5D3A: push    offset aFsecundaanglef; "fSecundaAngleFadeStart"
0x9E5D3F: mov     ecx, offset fSecundaAngleFadeStart
0x9E5D44: call    GameSetting_ConstrAndReg_float
0x9E5D49: push    offset sub_A1D2C0; void (__cdecl *)()
0x9E5D4E: call    _atexit
0x9E5D53: pop     ecx
0x9E5D54: retn
