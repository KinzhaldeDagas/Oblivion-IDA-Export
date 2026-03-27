0x9ED520: fld     ds:flt_A41304
0x9ED526: push    ecx
0x9ED527: fstp    [esp+4+var_4]; float
0x9ED52A: push    offset aFsplashsoundti; "fSplashSoundTimer"
0x9ED52F: mov     ecx, offset flt_B37B20
0x9ED534: call    GameSetting_ConstrAndReg_float
0x9ED539: push    offset sub_A1FD60; void (__cdecl *)()
0x9ED53E: call    _atexit
0x9ED543: pop     ecx
0x9ED544: retn
