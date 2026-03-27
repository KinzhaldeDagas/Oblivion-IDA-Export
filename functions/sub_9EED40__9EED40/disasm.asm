0x9EED40: fld     ds:flt_A3D9A4
0x9EED46: push    ecx
0x9EED47: fstp    [esp+4+var_4]; float
0x9EED4A: push    offset aFwortstrmult; "fWortStrMult"
0x9EED4F: mov     ecx, offset fWortStrMult
0x9EED54: call    GameSetting_ConstrAndReg_float
0x9EED59: push    offset sub_A20630; void (__cdecl *)()
0x9EED5E: call    _atexit
0x9EED63: pop     ecx
0x9EED64: retn
