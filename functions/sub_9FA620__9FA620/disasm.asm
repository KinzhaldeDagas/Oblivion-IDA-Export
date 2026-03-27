0x9FA620: fld     ds:flt_A67B0C
0x9FA626: push    ecx
0x9FA627: fstp    [esp+4+var_4]; float
0x9FA62A: push    offset aFpathnonfishsw; "fPathNonFishSwimmingPenalty"
0x9FA62F: mov     ecx, offset unk_B3A418
0x9FA634: call    GameSetting_ConstrAndReg_float
0x9FA639: push    offset sub_A24060; void (__cdecl *)()
0x9FA63E: call    _atexit
0x9FA643: pop     ecx
0x9FA644: retn
