0x9ECC00: fldz
0x9ECC02: push    ecx
0x9ECC03: fstp    [esp+4+var_4]; float
0x9ECC06: mov     ecx, offset fRepairArmorerBase
0x9ECC0B: push    offset aFrepairarmorer; "fRepairArmorerBase"
0x9ECC10: call    GameSetting_ConstrAndReg_float
0x9ECC15: push    offset sub_A1FA50; void (__cdecl *)()
0x9ECC1A: call    _atexit
0x9ECC1F: pop     ecx
0x9ECC20: retn
