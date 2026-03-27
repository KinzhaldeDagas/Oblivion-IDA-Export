0x9E8F10: fld     ds:flt_A41304
0x9E8F16: push    ecx
0x9E8F17: fstp    [esp+4+var_4]; float
0x9E8F1A: push    offset aFhandfatigueda; "fHandFatigueDamageMult"
0x9E8F1F: mov     ecx, offset fHandFatigueDamageMult
0x9E8F24: call    GameSetting_ConstrAndReg_float
0x9E8F29: push    offset sub_A1E420; void (__cdecl *)()
0x9E8F2E: call    _atexit
0x9E8F33: pop     ecx
0x9E8F34: retn
