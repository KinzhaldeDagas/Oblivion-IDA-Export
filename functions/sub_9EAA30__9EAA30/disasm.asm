0x9EAA30: fld     ds:flt_A58E1C
0x9EAA36: push    ecx
0x9EAA37: fstp    [esp+4+var_4]; float
0x9EAA3A: push    offset aFperksneakat_8; "fPerkSneakAttackMarksmanMasterMult"
0x9EAA3F: mov     ecx, offset fPerkSneakAttackMarksmanMasterMult
0x9EAA44: call    GameSetting_ConstrAndReg_float
0x9EAA49: push    offset sub_A1EE20; void (__cdecl *)()
0x9EAA4E: call    _atexit
0x9EAA53: pop     ecx
0x9EAA54: retn
