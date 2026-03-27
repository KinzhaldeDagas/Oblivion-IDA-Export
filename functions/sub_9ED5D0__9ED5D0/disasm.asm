0x9ED5D0: fld1
0x9ED5D2: push    ecx
0x9ED5D3: fstp    [esp+4+var_4]; float
0x9ED5D6: mov     ecx, offset flt_B37B40
0x9ED5DB: push    offset aFsplashscale1; "fSplashScale1"
0x9ED5E0: call    GameSetting_ConstrAndReg_float
0x9ED5E5: push    offset sub_A1FDA0; void (__cdecl *)()
0x9ED5EA: call    _atexit
0x9ED5EF: pop     ecx
0x9ED5F0: retn
