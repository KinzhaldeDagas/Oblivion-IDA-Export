0x9EBCB0: fld     ds:flt_A57384
0x9EBCB6: push    ecx
0x9EBCB7: fstp    [esp+4+var_4]; float
0x9EBCBA: push    offset aFcrimedisppick; "fCrimeDispPickpocket"
0x9EBCBF: mov     ecx, offset g_fCrimeDispPickpocket_Value; Verified crime setting value used by605F60/606140; registration 0x9ebcb0 contains matching GMST key. This is value storage, not a complete Setting object declaration.
0x9EBCC4: call    GameSetting_ConstrAndReg_float
0x9EBCC9: push    offset sub_A1F4D0; void (__cdecl *)()
0x9EBCCE: call    _atexit
0x9EBCD3: pop     ecx
0x9EBCD4: retn
