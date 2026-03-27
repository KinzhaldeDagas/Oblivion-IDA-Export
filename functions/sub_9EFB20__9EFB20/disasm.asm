0x9EFB20: fld     ds:flt_A31E2C
0x9EFB26: push    ecx
0x9EFB27: fstp    [esp+4+var_4]; float
0x9EFB2A: push    offset aFabsorbboltsra; "fAbsorbBoltsRadius"
0x9EFB2F: mov     ecx, offset fAbsorbBoltsRadius
0x9EFB34: call    GameSetting_ConstrAndReg_float
0x9EFB39: push    offset sub_A20B10; void (__cdecl *)()
0x9EFB3E: call    _atexit
0x9EFB43: pop     ecx
0x9EFB44: retn
