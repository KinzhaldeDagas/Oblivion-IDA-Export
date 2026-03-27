0x9E6D40: fld     ds:flt_A31C80
0x9E6D46: push    ecx
0x9E6D47: fstp    [esp+4+var_4]; float
0x9E6D4A: push    offset aFfriendhittime; "fFriendHitTimer"
0x9E6D4F: mov     ecx, offset fFriendHitTimer
0x9E6D54: call    GameSetting_ConstrAndReg_float
0x9E6D59: push    offset sub_A1D860; void (__cdecl *)()
0x9E6D5E: call    _atexit
0x9E6D63: pop     ecx
0x9E6D64: retn
