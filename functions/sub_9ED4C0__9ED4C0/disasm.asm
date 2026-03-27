0x9ED4C0: fld     ds:flt_A379CC
0x9ED4C6: push    ecx
0x9ED4C7: fstp    [esp+4+var_4]; float
0x9ED4CA: push    offset aFsplashsoundme; "fSplashSoundMedium"
0x9ED4CF: mov     ecx, offset flt_B37B10
0x9ED4D4: call    GameSetting_ConstrAndReg_float
0x9ED4D9: push    offset sub_A1FD40; void (__cdecl *)()
0x9ED4DE: call    _atexit
0x9ED4E3: pop     ecx
0x9ED4E4: retn
