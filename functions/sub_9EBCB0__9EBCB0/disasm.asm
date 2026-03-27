0x9EBCB0: fld     ds:flt_A57384
0x9EBCB6: push    ecx
0x9EBCB7: fstp    [esp+4+var_4]; float
0x9EBCBA: push    offset aFcrimedisppick; "fCrimeDispPickpocket"
0x9EBCBF: mov     ecx, offset fCrimeDispPickpocket
0x9EBCC4: call    GameSetting_ConstrAndReg_float
0x9EBCC9: push    offset sub_A1F4D0; void (__cdecl *)()
0x9EBCCE: call    _atexit
0x9EBCD3: pop     ecx
0x9EBCD4: retn
