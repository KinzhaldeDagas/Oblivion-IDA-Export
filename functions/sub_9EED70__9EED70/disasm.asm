0x9EED70: fld     ds:flt_A31E2C
0x9EED76: push    ecx
0x9EED77: fstp    [esp+4+var_4]; float
0x9EED7A: push    offset aFwortcraftfati; "fWortcraftFatigueMag"
0x9EED7F: mov     ecx, offset fWortcraftFatigueMag
0x9EED84: call    GameSetting_ConstrAndReg_float
0x9EED89: push    offset sub_A20640; void (__cdecl *)()
0x9EED8E: call    _atexit
0x9EED93: pop     ecx
0x9EED94: retn
