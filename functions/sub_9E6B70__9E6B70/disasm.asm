0x9E6B70: fld     ds:flt_A57718
0x9E6B76: push    ecx
0x9E6B77: fstp    [esp+4+var_4]; float
0x9E6B7A: push    offset aFfightaggrbase; "fFightAggrBase"
0x9E6B7F: mov     ecx, offset fFightAggrBase
0x9E6B84: call    GameSetting_ConstrAndReg_float
0x9E6B89: push    offset sub_A1D7C0; void (__cdecl *)()
0x9E6B8E: call    _atexit
0x9E6B93: pop     ecx
0x9E6B94: retn
