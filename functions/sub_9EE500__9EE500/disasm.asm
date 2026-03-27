0x9EE500: fldz
0x9EE502: push    ecx
0x9EE503: fstp    [esp+4+var_4]; float
0x9EE506: mov     ecx, offset fMagicEnchantmentChargeBase
0x9EE50B: push    offset aFmagicenchantm; "fMagicEnchantmentChargeBase"
0x9EE510: call    GameSetting_ConstrAndReg_float
0x9EE515: push    offset sub_A20370; void (__cdecl *)()
0x9EE51A: call    _atexit
0x9EE51F: pop     ecx
0x9EE520: retn
