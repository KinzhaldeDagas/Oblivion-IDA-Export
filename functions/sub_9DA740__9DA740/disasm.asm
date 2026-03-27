0x9DA740: fld1
0x9DA742: push    ecx
0x9DA743: fstp    [esp+4+var_4]; float
0x9DA746: mov     ecx, offset fMagicDefaultCEEnchantFactor
0x9DA74B: push    offset aFmagicdefaultc; "fMagicDefaultCEEnchantFactor"
0x9DA750: call    GameSetting_ConstrAndReg_float
0x9DA755: push    offset sub_A178F0; void (__cdecl *)()
0x9DA75A: call    _atexit
0x9DA75F: pop     ecx
0x9DA760: retn
