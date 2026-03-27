0x9E97E0: fld     ds:flt_A58EB0
0x9E97E6: push    ecx
0x9E97E7: fstp    [esp+4+var_4]; float
0x9E97EA: push    offset aFfatiguebloc_0; "fFatigueBlockSkillMult"
0x9E97EF: mov     ecx, offset fFatigueBlockSkillMult
0x9E97F4: call    GameSetting_ConstrAndReg_float
0x9E97F9: push    offset sub_A1E730; void (__cdecl *)()
0x9E97FE: call    _atexit
0x9E9803: pop     ecx
0x9E9804: retn
