0x9EF490: fld     ds:flt_A41304
0x9EF496: push    ecx
0x9EF497: fstp    [esp+4+var_4]; float
0x9EF49A: push    offset aFmagiclevelmag; "fMagicLevelMagnitudeMult"
0x9EF49F: mov     ecx, offset fMagicLevelMagnitudeMult
0x9EF4A4: call    GameSetting_ConstrAndReg_float
0x9EF4A9: push    offset sub_A208C0; void (__cdecl *)()
0x9EF4AE: call    _atexit
0x9EF4B3: pop     ecx
0x9EF4B4: retn
