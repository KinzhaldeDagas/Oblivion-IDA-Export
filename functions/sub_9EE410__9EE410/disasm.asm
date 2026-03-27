0x9EE410: fld1
0x9EE412: push    ecx
0x9EE413: fstp    [esp+4+var_4]; float
0x9EE416: mov     ecx, offset flt_B37E00
0x9EE41B: push    offset aFmagicspelll_0; "fMagicSpellLevelCostMult"
0x9EE420: call    GameSetting_ConstrAndReg_float
0x9EE425: push    offset sub_A20320; void (__cdecl *)()
0x9EE42A: call    _atexit
0x9EE42F: pop     ecx
0x9EE430: retn
