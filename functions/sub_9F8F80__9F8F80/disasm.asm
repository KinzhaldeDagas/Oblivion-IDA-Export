0x9F8F80: fld     ds:flt_A43328
0x9F8F86: push    ecx
0x9F8F87: fstp    [esp+4+var_4]; float
0x9F8F8A: push    offset aFtreewindvaria; "fTreeWindVariance"
0x9F8F8F: mov     ecx, offset unk_B39E20
0x9F8F94: call    GameSetting_ConstrAndReg_float
0x9F8F99: push    offset sub_A23590; void (__cdecl *)()
0x9F8F9E: call    _atexit
0x9F8FA3: pop     ecx
0x9F8FA4: retn
