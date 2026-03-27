0x9E6520: fld     ds:flt_A57414
0x9E6526: push    ecx
0x9E6527: fstp    [esp+4+var_4]; float
0x9E652A: push    offset aFsneaklightmul; "fSneakLightMult"
0x9E652F: mov     ecx, offset fSneakLightMult
0x9E6534: call    GameSetting_ConstrAndReg_float
0x9E6539: push    offset sub_A1D590; void (__cdecl *)()
0x9E653E: call    _atexit
0x9E6543: pop     ecx
0x9E6544: retn
