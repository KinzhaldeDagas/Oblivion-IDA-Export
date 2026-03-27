0x9ED580: fld     ds:flt_A3D65C
0x9ED586: push    ecx
0x9ED587: fstp    [esp+4+var_4]; float
0x9ED58A: push    offset aFsplashsoundou; "fSplashSoundOutMult"
0x9ED58F: mov     ecx, offset flt_B37B30
0x9ED594: call    GameSetting_ConstrAndReg_float
0x9ED599: push    offset sub_A1FD80; void (__cdecl *)()
0x9ED59E: call    _atexit
0x9ED5A3: pop     ecx
0x9ED5A4: retn
