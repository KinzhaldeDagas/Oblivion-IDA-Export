0x9E7D50: fld     ds:flt_A57FB8
0x9E7D56: push    ecx
0x9E7D57: fstp    [esp+4+var_4]; float
0x9E7D5A: push    offset aFvanitymodew_1; "fVanityModeWheelMax"
0x9E7D5F: mov     ecx, offset flt_B36B68
0x9E7D64: call    GameSetting_ConstrAndReg_float
0x9E7D69: push    offset sub_A1DDF0; void (__cdecl *)()
0x9E7D6E: call    _atexit
0x9E7D73: pop     ecx
0x9E7D74: retn
