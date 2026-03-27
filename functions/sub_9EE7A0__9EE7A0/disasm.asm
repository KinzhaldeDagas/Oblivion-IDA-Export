0x9EE7A0: fld     ds:flt_A2FE7C
0x9EE7A6: push    ecx
0x9EE7A7: fstp    [esp+4+var_4]; float
0x9EE7AA: push    offset aFmagicexplos_0; "fMagicExplosionPowerMax"
0x9EE7AF: mov     ecx, offset flt_B37E98
0x9EE7B4: call    GameSetting_ConstrAndReg_float
0x9EE7B9: push    offset sub_A20450; void (__cdecl *)()
0x9EE7BE: call    _atexit
0x9EE7C3: pop     ecx
0x9EE7C4: retn
