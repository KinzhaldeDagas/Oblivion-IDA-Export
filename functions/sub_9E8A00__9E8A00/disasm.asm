0x9E8A00: fld     ds:g_DialogueFov?
0x9E8A06: push    ecx
0x9E8A07: fstp    [esp+4+var_4]; float
0x9E8A0A: push    offset aFaipowerattack; "fAIPowerAttackCreatureChance"
0x9E8A0F: mov     ecx, offset unk_B36DA8
0x9E8A14: call    GameSetting_ConstrAndReg_float
0x9E8A19: push    offset sub_A1E270; void (__cdecl *)()
0x9E8A1E: call    _atexit
0x9E8A23: pop     ecx
0x9E8A24: retn
