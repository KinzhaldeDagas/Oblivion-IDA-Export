0x9EB010: fld     ds:flt_A59E20
0x9EB016: push    ecx
0x9EB017: fstp    [esp+4+var_4]; float
0x9EB01A: push    offset aFjumpfallskill; "fJumpFallSkillBase"
0x9EB01F: mov     ecx, offset flt_B37480
0x9EB024: call    GameSetting_ConstrAndReg_float
0x9EB029: push    offset sub_A1F020; void (__cdecl *)()
0x9EB02E: call    _atexit
0x9EB033: pop     ecx
0x9EB034: retn
