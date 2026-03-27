0x9ECC30: fld     ds:dword_A46C30
0x9ECC36: push    ecx
0x9ECC37: fstp    [esp+4+var_4]; float
0x9ECC3A: push    offset aFrepairarmor_0; "fRepairArmorerMult"
0x9ECC3F: mov     ecx, offset fRepairArmorerMult
0x9ECC44: call    GameSetting_ConstrAndReg_float
0x9ECC49: push    offset sub_A1FA60; void (__cdecl *)()
0x9ECC4E: call    _atexit
0x9ECC53: pop     ecx
0x9ECC54: retn
