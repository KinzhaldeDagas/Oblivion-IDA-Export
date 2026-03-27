0x9E7B50: fld     ds:flt_A57F94
0x9E7B56: push    ecx
0x9E7B57: fstp    [esp+4+var_4]; float
0x9E7B5A: push    offset aFaiexteriors_0; "fAIExteriorSpectatorDistance"
0x9E7B5F: mov     ecx, offset flt_B36B10
0x9E7B64: call    GameSetting_ConstrAndReg_float
0x9E7B69: push    offset sub_A1DD40; void (__cdecl *)()
0x9E7B6E: call    _atexit
0x9E7B73: pop     ecx
0x9E7B74: retn
