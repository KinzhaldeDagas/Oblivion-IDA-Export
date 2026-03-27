0x9E7C00: fld     ds:flt_A31C80
0x9E7C06: push    ecx
0x9E7C07: fstp    [esp+4+var_4]; float
0x9E7C0A: push    offset aFaitrespasswar; "fAITrespassWarningTimer"
0x9E7C0F: mov     ecx, offset flt_B36B30
0x9E7C14: call    GameSetting_ConstrAndReg_float
0x9E7C19: push    offset sub_A1DD80; void (__cdecl *)()
0x9E7C1E: call    _atexit
0x9E7C23: pop     ecx
0x9E7C24: retn
