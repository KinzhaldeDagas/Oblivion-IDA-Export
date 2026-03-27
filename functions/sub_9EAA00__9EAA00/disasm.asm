0x9EAA00: fld     ds:flt_A5977C
0x9EAA06: push    ecx
0x9EAA07: fstp    [esp+4+var_4]; float
0x9EAA0A: push    offset aFperksneakat_7; "fPerkSneakAttackMeleeMasterMult"
0x9EAA0F: mov     ecx, offset fPerkSneakAttackMeleeMasterMult
0x9EAA14: call    GameSetting_ConstrAndReg_float
0x9EAA19: push    offset sub_A1EE10; void (__cdecl *)()
0x9EAA1E: call    _atexit
0x9EAA23: pop     ecx
0x9EAA24: retn
