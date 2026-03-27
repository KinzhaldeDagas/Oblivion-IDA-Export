0x9E3B70: fld     ds:fConstant_2
0x9E3B76: push    ecx
0x9E3B77: fstp    [esp+4+var_4]; float
0x9E3B7A: push    offset aFcreaturecalcm; "fCreatureCalcMagic"
0x9E3B7F: mov     ecx, offset flt_B362AC
0x9E3B84: call    GameSetting_ConstrAndReg_float
0x9E3B89: push    offset sub_A1C170; void (__cdecl *)()
0x9E3B8E: call    _atexit
0x9E3B93: pop     ecx
0x9E3B94: retn
