0x9ED4F0: fld     ds:flt_A31E2C
0x9ED4F6: push    ecx
0x9ED4F7: fstp    [esp+4+var_4]; float
0x9ED4FA: push    offset aFsplashsoundli; "fSplashSoundLight"
0x9ED4FF: mov     ecx, offset flt_B37B18
0x9ED504: call    GameSetting_ConstrAndReg_float
0x9ED509: push    offset sub_A1FD50; void (__cdecl *)()
0x9ED50E: call    _atexit
0x9ED513: pop     ecx
0x9ED514: retn
