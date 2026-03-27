0x9DA580: fld     ds:flt_A34A80
0x9DA586: push    ecx
0x9DA587: fstp    [esp+4+var_4]; float
0x9DA58A: push    offset aFmagicsprayopt; "fMagicSprayOptimalDistance"
0x9DA58F: mov     ecx, offset fMagicSprayOptimalDistance
0x9DA594: call    GameSetting_ConstrAndReg_float
0x9DA599: push    offset sub_A17840; void (__cdecl *)()
0x9DA59E: call    _atexit
0x9DA5A3: pop     ecx
0x9DA5A4: retn
