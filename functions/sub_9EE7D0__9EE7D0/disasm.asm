0x9EE7D0: fld     ds:flt_A2FE7C
0x9EE7D6: push    ecx
0x9EE7D7: fstp    [esp+4+var_4]; float
0x9EE7DA: push    offset aFmagicexplos_1; "fMagicExplosionPowerBase"
0x9EE7DF: mov     ecx, offset fMagicExplosionPowerBase
0x9EE7E4: call    GameSetting_ConstrAndReg_float
0x9EE7E9: push    offset sub_A20460; void (__cdecl *)()
0x9EE7EE: call    _atexit
0x9EE7F3: pop     ecx
0x9EE7F4: retn
