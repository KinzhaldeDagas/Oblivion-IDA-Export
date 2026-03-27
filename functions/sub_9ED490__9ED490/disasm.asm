0x9ED490: fld     ds:flt_A3D8F0
0x9ED496: push    ecx
0x9ED497: fstp    [esp+4+var_4]; float
0x9ED49A: push    offset aFsplashsoundhe; "fSplashSoundHeavy"
0x9ED49F: mov     ecx, offset flt_B37B08
0x9ED4A4: call    GameSetting_ConstrAndReg_float
0x9ED4A9: push    offset sub_A1FD30; void (__cdecl *)()
0x9ED4AE: call    _atexit
0x9ED4B3: pop     ecx
0x9ED4B4: retn
