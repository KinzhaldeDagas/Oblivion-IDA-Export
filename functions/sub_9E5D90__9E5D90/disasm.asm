0x9E5D90: fld     ds:flt_A3D65C
0x9E5D96: push    ecx
0x9E5D97: fstp    [esp+4+var_4]; float
0x9E5D9A: push    offset aFsecundaangles; "fSecundaAngleShadowEarlyFade"
0x9E5D9F: mov     ecx, offset fSecundaAngleShadowEarlyFade
0x9E5DA4: call    GameSetting_ConstrAndReg_float
0x9E5DA9: push    offset sub_A1D2E0; void (__cdecl *)()
0x9E5DAE: call    _atexit
0x9E5DB3: pop     ecx
0x9E5DB4: retn
