0x9DA710: fld     ds:flt_A34BA0
0x9DA716: push    ecx
0x9DA717: fstp    [esp+4+var_4]; float
0x9DA71A: push    offset aFchameleonminr; "fChameleonMinRefraction"
0x9DA71F: mov     ecx, offset fChameleonMinRefraction
0x9DA724: call    GameSetting_ConstrAndReg_float
0x9DA729: push    offset sub_A178E0; void (__cdecl *)()
0x9DA72E: call    _atexit
0x9DA733: pop     ecx
0x9DA734: retn
