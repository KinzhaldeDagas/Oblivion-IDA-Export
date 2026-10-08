0x9EE170: fld1; Construct/register fSkillUseExp with Oblivion default 1.0.
0x9EE172: push    ecx
0x9EE173: fstp    [esp+4+var_4]; float
0x9EE176: mov     ecx, offset g_fSkillUseExp
0x9EE17B: push    offset aFskilluseexp; "fSkillUseExp"
0x9EE180: call    GameSetting_ConstrAndReg_float
0x9EE185: push    offset sub_A20240; void (__cdecl *)()
0x9EE18A: call    _atexit
0x9EE18F: pop     ecx
0x9EE190: retn
