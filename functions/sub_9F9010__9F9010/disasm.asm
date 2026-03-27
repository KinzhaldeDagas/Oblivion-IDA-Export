0x9F9010: fld1
0x9F9012: push    ecx
0x9F9013: fstp    [esp+4+var_4]; float
0x9F9016: mov     ecx, offset flt_B39E38
0x9F901B: push    offset aFleafrockspeed; "fLeafRockSpeedSwayInfluence"
0x9F9020: call    GameSetting_ConstrAndReg_float
0x9F9025: push    offset sub_A235C0; void (__cdecl *)()
0x9F902A: call    _atexit
0x9F902F: pop     ecx
0x9F9030: retn
