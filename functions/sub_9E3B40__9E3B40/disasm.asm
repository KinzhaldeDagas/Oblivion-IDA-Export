0x9E3B40: fld     ds:fConstant_2
0x9E3B46: push    ecx
0x9E3B47: fstp    [esp+4+var_4]; float
0x9E3B4A: push    offset aFcreaturecalcc; "fCreatureCalcCombat"
0x9E3B4F: mov     ecx, (offset stru_B36208.unk18+84h)
0x9E3B54: call    GameSetting_ConstrAndReg_float
0x9E3B59: push    offset sub_A1C160; void (__cdecl *)()
0x9E3B5E: call    _atexit
0x9E3B63: pop     ecx
0x9E3B64: retn
