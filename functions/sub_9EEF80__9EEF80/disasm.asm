0x9EEF80: fld1
0x9EEF82: push    ecx
0x9EEF83: fstp    [esp+4+var_4]; float
0x9EEF86: mov     ecx, offset fEnchantmentGoldMult
0x9EEF8B: push    offset aFenchantmentgo; "fEnchantmentGoldMult"
0x9EEF90: call    GameSetting_ConstrAndReg_float
0x9EEF95: push    offset sub_A206F0; void (__cdecl *)()
0x9EEF9A: call    _atexit
0x9EEF9F: pop     ecx
0x9EEFA0: retn
