0x9ED630: fld     ds:flt_A47E6C
0x9ED636: push    ecx
0x9ED637: fstp    [esp+4+var_4]; float
0x9ED63A: push    offset aFsplashscale3; "fSplashScale3"
0x9ED63F: mov     ecx, offset fSplashScale3
0x9ED644: call    GameSetting_ConstrAndReg_float
0x9ED649: push    offset sub_A1FDC0; void (__cdecl *)()
0x9ED64E: call    _atexit
0x9ED653: pop     ecx
0x9ED654: retn
