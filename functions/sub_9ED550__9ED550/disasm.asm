0x9ED550: fld     ds:flt_A43328
0x9ED556: push    ecx
0x9ED557: fstp    [esp+4+var_4]; float
0x9ED55A: push    offset aFsplashsoundve; "fSplashSoundVelocityMult"
0x9ED55F: mov     ecx, offset flt_B37B28
0x9ED564: call    GameSetting_ConstrAndReg_float
0x9ED569: push    offset sub_A1FD70; void (__cdecl *)()
0x9ED56E: call    _atexit
0x9ED573: pop     ecx
0x9ED574: retn
