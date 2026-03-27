0x9E1010: fld1
0x9E1012: push    ecx
0x9E1013: fstp    [esp+4+var_4]; float
0x9E1016: mov     ecx, offset flt_B35728
0x9E101B: push    offset aFaidefaultat_6; "fAIDefaultAttackNoAttackMult"
0x9E1020: call    GameSetting_ConstrAndReg_float
0x9E1025: push    offset sub_A1AD80; void (__cdecl *)()
0x9E102A: call    _atexit
0x9E102F: pop     ecx
0x9E1030: retn
