0x9E0B00: fld     ds:flt_A3D65C
0x9E0B06: push    ecx
0x9E0B07: fstp    [esp+4+var_4]; float
0x9E0B0A: push    offset aFaidefaulthold; "fAIDefaultHoldMinTime"
0x9E0B0F: mov     ecx, offset flt_B35650
0x9E0B14: call    GameSetting_ConstrAndReg_float
0x9E0B19: push    offset sub_A1ABD0; void (__cdecl *)()
0x9E0B1E: call    _atexit
0x9E0B23: pop     ecx
0x9E0B24: retn
