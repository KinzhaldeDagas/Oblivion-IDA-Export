0x9F9070: fld1
0x9F9072: push    ecx
0x9F9073: fstp    [esp+4+var_4]; float
0x9F9076: mov     ecx, offset flt_B39E48
0x9F907B: push    offset aFleafrockamoun; "fLeafRockAmountSwayInfluence"
0x9F9080: call    GameSetting_ConstrAndReg_float
0x9F9085: push    offset sub_A235E0; void (__cdecl *)()
0x9F908A: call    _atexit
0x9F908F: pop     ecx
0x9F9090: retn
