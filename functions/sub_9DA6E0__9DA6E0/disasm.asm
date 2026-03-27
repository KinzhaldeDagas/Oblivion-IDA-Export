0x9DA6E0: fld1
0x9DA6E2: push    ecx
0x9DA6E3: fstp    [esp+4+var_4]; float
0x9DA6E6: mov     ecx, offset fChameleonMaxRefraction
0x9DA6EB: push    offset aFchameleonmaxr; "fChameleonMaxRefraction"
0x9DA6F0: call    GameSetting_ConstrAndReg_float
0x9DA6F5: push    offset sub_A178D0; void (__cdecl *)()
0x9DA6FA: call    _atexit
0x9DA6FF: pop     ecx
0x9DA700: retn
