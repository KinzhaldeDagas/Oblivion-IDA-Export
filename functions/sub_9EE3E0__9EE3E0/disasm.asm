0x9EE3E0: fldz
0x9EE3E2: push    ecx
0x9EE3E3: fstp    [esp+4+var_4]; float
0x9EE3E6: mov     ecx, offset flt_B37DF8
0x9EE3EB: push    offset aFmagicspelllev; "fMagicSpellLevelCostBase"
0x9EE3F0: call    GameSetting_ConstrAndReg_float
0x9EE3F5: push    offset sub_A20310; void (__cdecl *)()
0x9EE3FA: call    _atexit
0x9EE3FF: pop     ecx
0x9EE400: retn
