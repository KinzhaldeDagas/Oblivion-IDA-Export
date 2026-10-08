0x9F9010: fld1; Verified GameSettingFloat registration: fLeafRockSpeedSwayInfluence defaults to 1.0 and registers its atexit destructor.
0x9F9012: push    ecx
0x9F9013: fstp    [esp+4+var_4]; float
0x9F9016: mov     ecx, offset fLeafRockSpeedSwayInfluence
0x9F901B: push    offset aFleafrockspeed; "fLeafRockSpeedSwayInfluence"
0x9F9020: call    GameSetting_ConstrAndReg_float
0x9F9025: push    offset GameSetting_fLeafRockSpeedSwayInfluence_atexit; void (__cdecl *)()
0x9F902A: call    _atexit
0x9F902F: pop     ecx
0x9F9030: retn
