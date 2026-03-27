0x9EE770: fldz
0x9EE772: push    ecx
0x9EE773: fstp    [esp+4+var_4]; float
0x9EE776: mov     ecx, offset flt_B37E90
0x9EE77B: push    offset aFmagicexplosio; "fMagicExplosionPowerMin"
0x9EE780: call    GameSetting_ConstrAndReg_float
0x9EE785: push    offset sub_A20440; void (__cdecl *)()
0x9EE78A: call    _atexit
0x9EE78F: pop     ecx
0x9EE790: retn
