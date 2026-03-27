0x65DB4B: add     esi, 0FFFFFFA4h
0x65DB4E: push    0Ah
0x65DB50: mov     ecx, esi
0x65DB52: call    Actor_GetBaseCalcAVi
0x65DB57: fld1
0x65DB59: test    eax, eax
0x65DB5B: fstp    [esp+arg_4]
0x65DB5F: mov     [esp+arg_8], eax
0x65DB63: jz      short Player_MagicCaster_GetCastingEffectiveness___ArmorFactor
0x65DB65: cmp     eax, edi
0x65DB67: jz      short Player_MagicCaster_GetCastingEffectiveness___ArmorFactor
0x65DB69: fild    [esp+arg_14]
0x65DB6D: push    ecx
0x65DB6E: fidiv   [esp+4+arg_8]
0x65DB72: fstp    [esp+4+arg_14]
0x65DB76: fld     [esp+4+arg_14]
0x65DB7A: fstp    [esp+4+var_4]; float
0x65DB7D: call    Calc_FatigueSpellEffectiveness
0x65DB82: fstp    [esp+4+arg_4]
0x65DB86: add     esp, 4
