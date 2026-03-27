0x9EBD90: fld     ds:flt_A3D65C
0x9EBD96: push    ecx
0x9EBD97: fstp    [esp+4+var_4]; float
0x9EBD9A: push    offset aFstatshealthst; "fStatsHealthStartMult"
0x9EBD9F: mov     ecx, offset fStatsHealthStartMult
0x9EBDA4: call    GameSetting_ConstrAndReg_float
0x9EBDA9: push    offset sub_A1F520; void (__cdecl *)()
0x9EBDAE: call    _atexit
0x9EBDB3: pop     ecx
0x9EBDB4: retn
