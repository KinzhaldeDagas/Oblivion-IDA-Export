0x9E0B60: fld1
0x9E0B62: push    ecx
0x9E0B63: fstp    [esp+4+var_4]; float
0x9E0B66: mov     ecx, offset flt_B35660
0x9E0B6B: push    offset aFaidefaultopti; "fAIDefaultOptimalRangeMult"
0x9E0B70: call    GameSetting_ConstrAndReg_float
0x9E0B75: push    offset sub_A1ABF0; void (__cdecl *)()
0x9E0B7A: call    _atexit
0x9E0B7F: pop     ecx
0x9E0B80: retn
