0x9EBF60: fld     ds:flt_A5A5F8
0x9EBF66: push    ecx
0x9EBF67: fstp    [esp+4+var_4]; float
0x9EBF6A: push    offset aFpersadmireagg; "fPersAdmireAggr"
0x9EBF6F: mov     ecx, offset fPersAdmireAggr
0x9EBF74: call    GameSetting_ConstrAndReg_float
0x9EBF79: push    offset sub_A1F5C0; void (__cdecl *)()
0x9EBF7E: call    _atexit
0x9EBF83: pop     ecx
0x9EBF84: retn
