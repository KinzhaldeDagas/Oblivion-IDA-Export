0x9FBD40: fld     ds:flt_A31C80
0x9FBD46: push    ecx
0x9FBD47: fstp    [esp+4+var_4]; float
0x9FBD4A: push    offset aFmincreatedare; "fMinCreatedArea"
0x9FBD4F: mov     ecx, offset flt_B3B29C
0x9FBD54: call    GameSetting_ConstrAndReg_float
0x9FBD59: push    offset sub_A24AB0; void (__cdecl *)()
0x9FBD5E: call    _atexit
0x9FBD63: pop     ecx
0x9FBD64: retn
