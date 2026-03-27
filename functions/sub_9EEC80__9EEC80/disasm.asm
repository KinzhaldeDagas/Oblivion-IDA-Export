0x9EEC80: fld     ds:flt_A31C80
0x9EEC86: push    ecx
0x9EEC87: fstp    [esp+4+var_4]; float
0x9EEC8A: push    offset aFwortcraftch_0; "fWortcraftChanceLuckDenom"
0x9EEC8F: mov     ecx, offset fWortcraftChanceLuckDenom
0x9EEC94: call    GameSetting_ConstrAndReg_float
0x9EEC99: push    offset sub_A205F0; void (__cdecl *)()
0x9EEC9E: call    _atexit
0x9EECA3: pop     ecx
0x9EECA4: retn
