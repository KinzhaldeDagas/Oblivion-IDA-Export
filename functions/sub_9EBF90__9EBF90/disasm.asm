0x9EBF90: fld1
0x9EBF92: push    ecx
0x9EBF93: fstp    [esp+4+var_4]; float
0x9EBF96: mov     ecx, offset fPersAdmireConf
0x9EBF9B: push    offset aFpersadmirecon; "fPersAdmireConf"
0x9EBFA0: call    GameSetting_ConstrAndReg_float
0x9EBFA5: push    offset sub_A1F5D0; void (__cdecl *)()
0x9EBFAA: call    _atexit
0x9EBFAF: pop     ecx
0x9EBFB0: retn
