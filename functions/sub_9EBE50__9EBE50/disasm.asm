0x9EBE50: fld     ds:fConstant_2
0x9EBE56: push    ecx
0x9EBE57: fstp    [esp+4+var_4]; float
0x9EBE5A: push    offset aFpcbasehealthm; "fPCBaseHealthMult"
0x9EBE5F: mov     ecx, offset fPCBaseHealthMult
0x9EBE64: call    GameSetting_ConstrAndReg_float
0x9EBE69: push    offset sub_A1F560; void (__cdecl *)()
0x9EBE6E: call    _atexit
0x9EBE73: pop     ecx
0x9EBE74: retn
