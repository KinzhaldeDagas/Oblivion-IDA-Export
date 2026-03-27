0x9E5C50: fld     ds:flt_A56F04
0x9E5C56: push    ecx
0x9E5C57: fstp    [esp+4+var_4]; float
0x9E5C5A: push    offset aFmasserangle_0; "fMasserAngleFadeEnd"
0x9E5C5F: mov     ecx, offset fMasserAngleFadeEnd
0x9E5C64: call    GameSetting_ConstrAndReg_float
0x9E5C69: push    offset sub_A1D270; void (__cdecl *)()
0x9E5C6E: call    _atexit
0x9E5C73: pop     ecx
0x9E5C74: retn
