0x9E5CE0: fld     ds:flt_A56F44
0x9E5CE6: push    ecx
0x9E5CE7: fstp    [esp+4+var_4]; float
0x9E5CEA: push    offset aFmasserzoffset; "fMasserZOffset"
0x9E5CEF: mov     ecx, offset fMasserZOffset
0x9E5CF4: call    GameSetting_ConstrAndReg_float
0x9E5CF9: push    offset sub_A1D2A0; void (__cdecl *)()
0x9E5CFE: call    _atexit
0x9E5D03: pop     ecx
0x9E5D04: retn
