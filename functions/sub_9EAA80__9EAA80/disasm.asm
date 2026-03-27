0x9EAA80: fld     ds:flt_A47E6C
0x9EAA86: push    ecx
0x9EAA87: fstp    [esp+4+var_4]; float
0x9EAA8A: push    offset aFactorluckskil; "fActorLuckSkillMult"
0x9EAA8F: mov     ecx, offset fActorLuckSkillMult
0x9EAA94: call    GameSetting_ConstrAndReg_float
0x9EAA99: push    offset sub_A1EE40; void (__cdecl *)()
0x9EAA9E: call    _atexit
0x9EAAA3: pop     ecx
0x9EAAA4: retn
