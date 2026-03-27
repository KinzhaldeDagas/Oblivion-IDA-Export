0x9EB780: fld     ds:flt_A56F84
0x9EB786: push    ecx
0x9EB787: fstp    [esp+4+var_4]; float
0x9EB78A: push    offset aFbarterhagglem; "fBarterHaggleMax"
0x9EB78F: mov     ecx, offset fBarterHaggleMax
0x9EB794: call    GameSetting_ConstrAndReg_float
0x9EB799: push    offset sub_A1F2B0; void (__cdecl *)()
0x9EB79E: call    _atexit
0x9EB7A3: pop     ecx
0x9EB7A4: retn
