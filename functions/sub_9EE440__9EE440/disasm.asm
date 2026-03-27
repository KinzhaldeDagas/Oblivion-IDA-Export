0x9EE440: fld     ds:flt_A379CC
0x9EE446: push    ecx
0x9EE447: fstp    [esp+4+var_4]; float
0x9EE44A: push    offset aFmagicspelll_1; "fMagicSpellLevelApprenticeMin"
0x9EE44F: mov     ecx, offset flt_B37E08
0x9EE454: call    GameSetting_ConstrAndReg_float
0x9EE459: push    offset sub_A20330; void (__cdecl *)()
0x9EE45E: call    _atexit
0x9EE463: pop     ecx
0x9EE464: retn
