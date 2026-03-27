0x9E5C80: fld     ds:flt_A3D65C
0x9E5C86: push    ecx
0x9E5C87: fstp    [esp+4+var_4]; float
0x9E5C8A: push    offset aFmasseranglesh; "fMasserAngleShadowEarlyFade"
0x9E5C8F: mov     ecx, offset fMasserAngleShadowEarlyFade
0x9E5C94: call    GameSetting_ConstrAndReg_float
0x9E5C99: push    offset sub_A1D280; void (__cdecl *)()
0x9E5C9E: call    _atexit
0x9E5CA3: pop     ecx
0x9E5CA4: retn
