0x9E8E50: fldz
0x9E8E52: push    ecx
0x9E8E53: fstp    [esp+4+var_4]; float
0x9E8E56: mov     ecx, offset fHandDamageStrengthBase
0x9E8E5B: push    offset aFhanddamagestr; "fHandDamageStrengthBase"
0x9E8E60: call    GameSetting_ConstrAndReg_float
0x9E8E65: push    offset sub_A1E3E0; void (__cdecl *)()
0x9E8E6A: call    _atexit
0x9E8E6F: pop     ecx
0x9E8E70: retn
