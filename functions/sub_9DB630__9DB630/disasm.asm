0x9DB630: fld     ds:flt_A3744C
0x9DB636: push    ecx
0x9DB637: fstp    [esp+4+var_4]; float
0x9DB63A: push    offset aFfadetoblackfa; "fFadeToBlackFadeSeconds"
0x9DB63F: mov     ecx, offset flt_B33A48
0x9DB644: call    GameSetting_ConstrAndReg_float
0x9DB649: push    offset sub_A18070; void (__cdecl *)()
0x9DB64E: call    _atexit
0x9DB653: pop     ecx
0x9DB654: retn
