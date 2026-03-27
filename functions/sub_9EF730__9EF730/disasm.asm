0x9EF730: fld1
0x9EF732: push    ecx
0x9EF733: fstp    [esp+4+var_4]; float
0x9EF736: mov     ecx, offset fShockBoltGrowWidth
0x9EF73B: push    offset aFshockboltgrow; "fShockBoltGrowWidth"
0x9EF740: call    GameSetting_ConstrAndReg_float
0x9EF745: push    offset sub_A209A0; void (__cdecl *)()
0x9EF74A: call    _atexit
0x9EF74F: pop     ecx
0x9EF750: retn
