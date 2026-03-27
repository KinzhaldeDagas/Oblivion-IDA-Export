0x9E84E0: fld     ds:flt_A417B4
0x9E84E6: push    ecx
0x9E84E7: fstp    [esp+4+var_4]; float
0x9E84EA: push    offset aFcheckdeadbody; "fCheckDeadBodyTimer"
0x9E84EF: mov     ecx, offset flt_B36CC0
0x9E84F4: call    GameSetting_ConstrAndReg_float
0x9E84F9: push    offset sub_A1E0A0; void (__cdecl *)()
0x9E84FE: call    _atexit
0x9E8503: pop     ecx
0x9E8504: retn
