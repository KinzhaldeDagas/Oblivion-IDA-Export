0x9EBB00: fld     ds:flt_A59E20
0x9EBB06: push    ecx
0x9EBB07: fstp    [esp+4+var_4]; float
0x9EBB0A: push    offset aFskilluseminor; "fSkillUseMinorMult"
0x9EBB0F: mov     ecx, offset fSkillUseMinorMult
0x9EBB14: call    GameSetting_ConstrAndReg_float
0x9EBB19: push    offset sub_A1F420; void (__cdecl *)()
0x9EBB1E: call    _atexit
0x9EBB23: pop     ecx
0x9EBB24: retn
