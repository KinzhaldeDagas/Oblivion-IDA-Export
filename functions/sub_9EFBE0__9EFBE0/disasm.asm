0x9EFBE0: fld     ds:flt_A37CFC
0x9EFBE6: push    ecx
0x9EFBE7: fstp    [esp+4+var_4]; float
0x9EFBEA: push    offset aFabsorbboltsma; "fAbsorbBoltSmallWidth"
0x9EFBEF: mov     ecx, offset fAbsorbBoltSmallWidth
0x9EFBF4: call    GameSetting_ConstrAndReg_float
0x9EFBF9: push    offset sub_A20B50; void (__cdecl *)()
0x9EFBFE: call    _atexit
0x9EFC03: pop     ecx
0x9EFC04: retn
