0x9F9070: fld1; Verified GameSettingFloat registration: fLeafRockAmountSwayInfluence defaults to 1.0 and registers its atexit destructor.
0x9F9072: push    ecx
0x9F9073: fstp    [esp+4+var_4]; float
0x9F9076: mov     ecx, offset fLeafRockAmountSwayInfluence
0x9F907B: push    offset aFleafrockamoun; "fLeafRockAmountSwayInfluence"
0x9F9080: call    GameSetting_ConstrAndReg_float
0x9F9085: push    offset GameSetting_fLeafRockAmountSwayInfluence_atexit; void (__cdecl *)()
0x9F908A: call    _atexit
0x9F908F: pop     ecx
0x9F9090: retn
