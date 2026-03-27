0x9DA4F0: fld     ds:flt_A342A0
0x9DA4F6: push    ecx
0x9DA4F7: fstp    [esp+4+var_4]; float
0x9DA4FA: push    offset aFmagicballmaxi; "fMagicBallMaximumDistance"
0x9DA4FF: mov     ecx, offset fMagicBallMaximumDistance
0x9DA504: call    GameSetting_ConstrAndReg_float
0x9DA509: push    offset sub_A17810; void (__cdecl *)()
0x9DA50E: call    _atexit
0x9DA513: pop     ecx
0x9DA514: retn
