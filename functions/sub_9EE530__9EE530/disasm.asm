0x9EE530: fld1
0x9EE532: push    ecx
0x9EE533: fstp    [esp+4+var_4]; float
0x9EE536: mov     ecx, offset fMagicEnchantmentChargeMult
0x9EE53B: push    offset aFmagicenchan_0; "fMagicEnchantmentChargeMult"
0x9EE540: call    GameSetting_ConstrAndReg_float
0x9EE545: push    offset sub_A20380; void (__cdecl *)()
0x9EE54A: call    _atexit
0x9EE54F: pop     ecx
0x9EE550: retn
