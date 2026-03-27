0x9EE800: fld     ds:flt_A47E6C
0x9EE806: push    ecx
0x9EE807: fstp    [esp+4+var_4]; float
0x9EE80A: push    offset aFmagicexplos_2; "fMagicExplosionPowerMult"
0x9EE80F: mov     ecx, offset fMagicExplosionPowerMult
0x9EE814: call    GameSetting_ConstrAndReg_float
0x9EE819: push    offset sub_A20470; void (__cdecl *)()
0x9EE81E: call    _atexit
0x9EE823: pop     ecx
0x9EE824: retn
