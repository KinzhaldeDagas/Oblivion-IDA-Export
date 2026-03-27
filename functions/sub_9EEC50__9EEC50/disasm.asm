0x9EEC50: fld     ds:flt_A31E2C
0x9EEC56: push    ecx
0x9EEC57: fstp    [esp+4+var_4]; float
0x9EEC5A: push    offset aFwortcraftchan; "fWortcraftChanceIntDenom"
0x9EEC5F: mov     ecx, offset fWortcraftChanceIntDenom
0x9EEC64: call    GameSetting_ConstrAndReg_float
0x9EEC69: push    offset sub_A205E0; void (__cdecl *)()
0x9EEC6E: call    _atexit
0x9EEC73: pop     ecx
0x9EEC74: retn
