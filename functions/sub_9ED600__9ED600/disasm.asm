0x9ED600: fld     ds:flt_A41328
0x9ED606: push    ecx
0x9ED607: fstp    [esp+4+var_4]; float
0x9ED60A: push    offset aFsplashscale2; "fSplashScale2"
0x9ED60F: mov     ecx, offset unk_B37B48
0x9ED614: call    GameSetting_ConstrAndReg_float
0x9ED619: push    offset sub_A1FDB0; void (__cdecl *)()
0x9ED61E: call    _atexit
0x9ED623: pop     ecx
0x9ED624: retn
