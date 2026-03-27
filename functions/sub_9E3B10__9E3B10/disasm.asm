0x9E3B10: fld1
0x9E3B12: push    ecx
0x9E3B13: fstp    [esp+4+var_4]; float
0x9E3B16: mov     ecx, (offset stru_B36208.unk18+7Ch)
0x9E3B1B: push    offset aFcreaturecalcd; "fCreatureCalcDamage"
0x9E3B20: call    GameSetting_ConstrAndReg_float
0x9E3B25: push    offset sub_A1C150; void (__cdecl *)()
0x9E3B2A: call    _atexit
0x9E3B2F: pop     ecx
0x9E3B30: retn
