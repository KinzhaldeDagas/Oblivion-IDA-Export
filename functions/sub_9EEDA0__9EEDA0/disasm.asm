0x9EEDA0: fld     ds:fConstant_2
0x9EEDA6: push    ecx
0x9EEDA7: fstp    [esp+4+var_4]; float
0x9EEDAA: push    offset aFmagicsundamag; "fMagicSunDamageBaseDamage"
0x9EEDAF: mov     ecx, offset fMagicSunDamageBaseDamage
0x9EEDB4: call    GameSetting_ConstrAndReg_float
0x9EEDB9: push    offset sub_A20650; void (__cdecl *)()
0x9EEDBE: call    _atexit
0x9EEDC3: pop     ecx
0x9EEDC4: retn
