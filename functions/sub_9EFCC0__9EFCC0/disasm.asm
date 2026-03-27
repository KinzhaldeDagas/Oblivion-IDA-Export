0x9EFCC0: fld1
0x9EFCC2: push    ecx
0x9EFCC3: fstp    [esp+4+var_4]; float
0x9EFCC6: mov     ecx, offset fAbsorbCoreColorB
0x9EFCCB: push    offset aFabsorbcorec_1; "fAbsorbCoreColorB"
0x9EFCD0: call    GameSetting_ConstrAndReg_float
0x9EFCD5: push    offset sub_A20BA0; void (__cdecl *)()
0x9EFCDA: call    _atexit
0x9EFCDF: pop     ecx
0x9EFCE0: retn
