0x9EDB90: fld     ds:flt_A3D65C
0x9EDB96: push    ecx
0x9EDB97: fstp    [esp+4+var_4]; float
0x9EDB9A: push    offset aFrumblehitstre; "fRumbleHitStrength"
0x9EDB9F: mov     ecx, offset fRumbleHitStrength
0x9EDBA4: call    GameSetting_ConstrAndReg_float
0x9EDBA9: push    offset sub_A1FFA0; void (__cdecl *)()
0x9EDBAE: call    _atexit
0x9EDBB3: pop     ecx
0x9EDBB4: retn
