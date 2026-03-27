0x9EE060: fld     ds:flt_A45128
0x9EE066: push    ecx
0x9EE067: fstp    [esp+4+var_4]; float
0x9EE06A: push    offset aFremoveexcessc; "fRemoveExcessComplexDeadTime"
0x9EE06F: mov     ecx, offset flt_B37D58
0x9EE074: call    GameSetting_ConstrAndReg_float
0x9EE079: push    offset sub_A201D0; void (__cdecl *)()
0x9EE07E: call    _atexit
0x9EE083: pop     ecx
0x9EE084: retn
