0x9EBD60: fld     ds:flt_A3F458
0x9EBD66: push    ecx
0x9EBD67: fstp    [esp+4+var_4]; float
0x9EBD6A: push    offset aFmaximumwind; "fMaximumWind"
0x9EBD6F: mov     ecx, offset fMaximumWind
0x9EBD74: call    GameSetting_ConstrAndReg_float
0x9EBD79: push    offset sub_A1F510; void (__cdecl *)()
0x9EBD7E: call    _atexit
0x9EBD83: pop     ecx
0x9EBD84: retn
