0x9E8FD0: fld1
0x9E8FD2: push    ecx
0x9E8FD3: fstp    [esp+4+var_4]; float
0x9E8FD6: mov     ecx, offset fArmorRatingMax
0x9E8FDB: push    offset aFarmorratingma; "fArmorRatingMax"
0x9E8FE0: call    GameSetting_ConstrAndReg_float
0x9E8FE5: push    offset sub_A1E460; void (__cdecl *)()
0x9E8FEA: call    _atexit
0x9E8FEF: pop     ecx
0x9E8FF0: retn
