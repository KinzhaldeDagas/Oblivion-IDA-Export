0x9EEFB0: fld1
0x9EEFB2: push    ecx
0x9EEFB3: fstp    [esp+4+var_4]; float
0x9EEFB6: mov     ecx, offset fAlchemyGoldMult
0x9EEFBB: push    offset aFalchemygoldmu; "fAlchemyGoldMult"
0x9EEFC0: call    GameSetting_ConstrAndReg_float
0x9EEFC5: push    offset sub_A20700; void (__cdecl *)()
0x9EEFCA: call    _atexit
0x9EEFCF: pop     ecx
0x9EEFD0: retn
