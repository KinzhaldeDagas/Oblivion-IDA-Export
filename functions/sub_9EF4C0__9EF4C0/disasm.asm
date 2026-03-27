0x9EF4C0: fld     ds:flt_A31E2C
0x9EF4C6: push    ecx
0x9EF4C7: fstp    [esp+4+var_4]; float
0x9EF4CA: push    offset aFmagicdispelma; "fMagicDispelMagnitudeMult"
0x9EF4CF: mov     ecx, offset fMagicDispelMagnitudeMult
0x9EF4D4: call    GameSetting_ConstrAndReg_float
0x9EF4D9: push    offset sub_A208D0; void (__cdecl *)()
0x9EF4DE: call    _atexit
0x9EF4E3: pop     ecx
0x9EF4E4: retn
