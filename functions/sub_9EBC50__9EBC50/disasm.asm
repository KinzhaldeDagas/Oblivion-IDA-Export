0x9EBC50: fld     ds:flt_A57770
0x9EBC56: push    ecx
0x9EBC57: fstp    [esp+4+var_4]; float
0x9EBC5A: push    offset aFcrimedispmurd; "fCrimeDispMurder"
0x9EBC5F: mov     ecx, offset g_fCrimeDispMurder_Value; Verified crime setting value used by605F60/606140; registration 0x9ebc50 contains matching GMST key. This is value storage, not a complete Setting object declaration.
0x9EBC64: call    GameSetting_ConstrAndReg_float
0x9EBC69: push    offset sub_A1F4B0; void (__cdecl *)()
0x9EBC6E: call    _atexit
0x9EBC73: pop     ecx
0x9EBC74: retn
