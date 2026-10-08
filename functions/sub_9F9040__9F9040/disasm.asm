0x9F9040: fld1; Verified GameSettingFloat registration: fLeafRustleSpeedSwayInfluence defaults to 1.0 and registers its atexit destructor.
0x9F9042: push    ecx
0x9F9043: fstp    [esp+4+var_4]; float
0x9F9046: mov     ecx, offset fLeafRustleSpeedSwayInfluence
0x9F904B: push    offset aFleafrustlespe; "fLeafRustleSpeedSwayInfluence"
0x9F9050: call    GameSetting_ConstrAndReg_float
0x9F9055: push    offset GameSetting_fLeafRustleSpeedSwayInfluence_atexit; void (__cdecl *)()
0x9F905A: call    _atexit
0x9F905F: pop     ecx
0x9F9060: retn
