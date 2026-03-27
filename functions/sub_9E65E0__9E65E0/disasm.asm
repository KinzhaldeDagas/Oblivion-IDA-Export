0x9E65E0: fld1
0x9E65E2: push    ecx
0x9E65E3: fstp    [esp+4+var_4]; float
0x9E65E6: mov     ecx, offset fCrimeSoundBase
0x9E65EB: push    offset aFcrimesoundbas; "fCrimeSoundBase"
0x9E65F0: call    GameSetting_ConstrAndReg_float
0x9E65F5: push    offset sub_A1D5D0; void (__cdecl *)()
0x9E65FA: call    _atexit
0x9E65FF: pop     ecx
0x9E6600: retn
