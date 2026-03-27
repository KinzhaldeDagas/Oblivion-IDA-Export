0x9EF0C0: fldz
0x9EF0C2: push    ecx
0x9EF0C3: fstp    [esp+4+var_4]; float
0x9EF0C6: mov     ecx, offset fMagicLightRadiusBase
0x9EF0CB: push    offset aFmagiclightrad; "fMagicLightRadiusBase"
0x9EF0D0: call    GameSetting_ConstrAndReg_float
0x9EF0D5: push    offset sub_A20760; void (__cdecl *)()
0x9EF0DA: call    _atexit
0x9EF0DF: pop     ecx
0x9EF0E0: retn
