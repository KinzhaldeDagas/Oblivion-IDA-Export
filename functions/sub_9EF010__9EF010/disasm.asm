0x9EF010: fld     ds:flt_A2FAAC
0x9EF016: push    ecx
0x9EF017: fstp    [esp+4+var_4]; float
0x9EF01A: push    offset aFmagicplayermi; "fMagicPlayerMinimumInvisibility"
0x9EF01F: mov     ecx, offset fMagicPlayerMinimumInvisibility
0x9EF024: call    GameSetting_ConstrAndReg_float
0x9EF029: push    offset sub_A20720; void (__cdecl *)()
0x9EF02E: call    _atexit
0x9EF033: pop     ecx
0x9EF034: retn
