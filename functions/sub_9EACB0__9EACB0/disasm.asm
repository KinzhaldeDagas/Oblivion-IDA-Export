0x9EACB0: fld     ds:flt_A430CC
0x9EACB6: push    ecx
0x9EACB7: fstp    [esp+4+var_4]; float
0x9EACBA: push    offset aFmovecharwalkm; "fMoveCharWalkMin"
0x9EACBF: mov     ecx, offset fMoveCharWalkMin
0x9EACC4: call    GameSetting_ConstrAndReg_float
0x9EACC9: push    offset sub_A1EF00; void (__cdecl *)()
0x9EACCE: call    _atexit
0x9EACD3: pop     ecx
0x9EACD4: retn
