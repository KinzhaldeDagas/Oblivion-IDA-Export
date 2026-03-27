0x9EF580: fld     ds:dword_A46C30
0x9EF586: push    ecx
0x9EF587: fstp    [esp+4+var_4]; float
0x9EF58A: push    offset aFmagictracking; "fMagicTrackingLimit"
0x9EF58F: mov     ecx, offset fMagicTrackingLimit
0x9EF594: call    GameSetting_ConstrAndReg_float
0x9EF599: push    offset sub_A20910; void (__cdecl *)()
0x9EF59E: call    _atexit
0x9EF5A3: pop     ecx
0x9EF5A4: retn
