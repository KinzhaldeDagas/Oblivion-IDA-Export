0x9E5C20: fld     ds:flt_A468E8
0x9E5C26: push    ecx
0x9E5C27: fstp    [esp+4+var_4]; float
0x9E5C2A: push    offset aFmasseranglefa; "fMasserAngleFadeStart"
0x9E5C2F: mov     ecx, offset fMasserAngleFadeStart
0x9E5C34: call    GameSetting_ConstrAndReg_float
0x9E5C39: push    offset sub_A1D260; void (__cdecl *)()
0x9E5C3E: call    _atexit
0x9E5C43: pop     ecx
0x9E5C44: retn
