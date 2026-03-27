0x9ECCF0: fld     ds:flt_A5AC50
0x9ECCF6: push    ecx
0x9ECCF7: fstp    [esp+4+var_4]; float
0x9ECCFA: push    offset aFrepairskill_0; "fRepairSkillBreakMult"
0x9ECCFF: mov     ecx, offset fRepairSkillBreakMult
0x9ECD04: call    GameSetting_ConstrAndReg_float
0x9ECD09: push    offset sub_A1FAA0; void (__cdecl *)()
0x9ECD0E: call    _atexit
0x9ECD13: pop     ecx
0x9ECD14: retn
