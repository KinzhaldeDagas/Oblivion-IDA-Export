0x9EC0E0: fld     ds:flt_A31E2C
0x9EC0E6: push    ecx
0x9EC0E7: fstp    [esp+4+var_4]; float
0x9EC0EA: push    offset aFpersjokeaggr; "fPersJokeAggr"
0x9EC0EF: mov     ecx, offset fPersJokeAggr
0x9EC0F4: call    GameSetting_ConstrAndReg_float
0x9EC0F9: push    offset sub_A1F640; void (__cdecl *)()
0x9EC0FE: call    _atexit
0x9EC103: pop     ecx
0x9EC104: retn
