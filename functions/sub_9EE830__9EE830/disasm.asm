0x9EE830: fldz
0x9EE832: push    ecx
0x9EE833: fstp    [esp+4+var_4]; float
0x9EE836: mov     ecx, offset fMagicExplosionAgilityMult
0x9EE83B: push    offset aFmagicexplos_3; "fMagicExplosionAgilityMult"
0x9EE840: call    GameSetting_ConstrAndReg_float
0x9EE845: push    offset sub_A20480; void (__cdecl *)()
0x9EE84A: call    _atexit
0x9EE84F: pop     ecx
0x9EE850: retn
