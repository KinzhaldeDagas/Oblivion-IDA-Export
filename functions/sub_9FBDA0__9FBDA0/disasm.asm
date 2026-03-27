0x9FBDA0: fld     ds:dword_A46C30
0x9FBDA6: push    ecx
0x9FBDA7: fstp    [esp+4+var_4]; float
0x9FBDAA: push    offset aFmincreatedmag; "fMinCreatedMag"
0x9FBDAF: mov     ecx, offset flt_B3B2AC
0x9FBDB4: call    GameSetting_ConstrAndReg_float
0x9FBDB9: push    offset sub_A24AD0; void (__cdecl *)()
0x9FBDBE: call    _atexit
0x9FBDC3: pop     ecx
0x9FBDC4: retn
