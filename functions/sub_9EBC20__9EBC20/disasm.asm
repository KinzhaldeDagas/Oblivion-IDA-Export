0x9EBC20: fld     ds:flt_A418D8
0x9EBC26: push    ecx
0x9EBC27: fstp    [esp+4+var_4]; float
0x9EBC2A: push    offset aFcrimedispatta; "fCrimeDispAttack"
0x9EBC2F: mov     ecx, offset fCrimeDispAttack
0x9EBC34: call    GameSetting_ConstrAndReg_float
0x9EBC39: push    offset sub_A1F4A0; void (__cdecl *)()
0x9EBC3E: call    _atexit
0x9EBC43: pop     ecx
0x9EBC44: retn
