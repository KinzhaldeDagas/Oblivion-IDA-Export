0x9EBC80: fld     ds:flt_A45E4C
0x9EBC86: push    ecx
0x9EBC87: fstp    [esp+4+var_4]; float
0x9EBC8A: push    offset aFcrimedispstea; "fCrimeDispSteal"
0x9EBC8F: mov     ecx, offset fCrimeDispSteal
0x9EBC94: call    GameSetting_ConstrAndReg_float
0x9EBC99: push    offset sub_A1F4C0; void (__cdecl *)()
0x9EBC9E: call    _atexit
0x9EBCA3: pop     ecx
0x9EBCA4: retn
