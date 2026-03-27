0x9F8610: fld     ds:flt_A643B0
0x9F8616: push    ecx
0x9F8617: fstp    [esp+4+var_4]; float
0x9F861A: push    offset aFblinkuptime; "fBlinkUpTime"
0x9F861F: mov     ecx, offset flt_B39AD8
0x9F8624: call    GameSetting_ConstrAndReg_float
0x9F8629: push    offset sub_A231C0; void (__cdecl *)()
0x9F862E: call    _atexit
0x9F8633: pop     ecx
0x9F8634: retn
