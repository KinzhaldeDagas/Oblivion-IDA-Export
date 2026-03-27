0x9EF870: fld     ds:flt_A3F424
0x9EF876: push    ecx
0x9EF877: fstp    [esp+4+var_4]; float
0x9EF87A: push    offset aFshockglowco_0; "fShockGlowColorG"
0x9EF87F: mov     ecx, offset fShockGlowColorG
0x9EF884: call    GameSetting_ConstrAndReg_float
0x9EF889: push    offset sub_A20A10; void (__cdecl *)()
0x9EF88E: call    _atexit
0x9EF893: pop     ecx
0x9EF894: retn
