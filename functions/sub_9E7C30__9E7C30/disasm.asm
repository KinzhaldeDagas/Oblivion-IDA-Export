0x9E7C30: fld     ds:flt_A31C80
0x9E7C36: push    ecx
0x9E7C37: fstp    [esp+4+var_4]; float
0x9E7C3A: push    offset aFaiawareofplay; "fAIAwareofPlayerTimer"
0x9E7C3F: mov     ecx, offset flt_B36B38
0x9E7C44: call    GameSetting_ConstrAndReg_float
0x9E7C49: push    offset sub_A1DD90; void (__cdecl *)()
0x9E7C4E: call    _atexit
0x9E7C53: pop     ecx
0x9E7C54: retn
