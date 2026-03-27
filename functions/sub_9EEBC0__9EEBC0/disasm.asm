0x9EEBC0: fldz
0x9EEBC2: push    ecx
0x9EEBC3: fstp    [esp+4+var_4]; float
0x9EEBC6: mov     ecx, offset fFatigueCastMult
0x9EEBCB: push    offset aFfatiguecastmu; "fFatigueCastMult"
0x9EEBD0: call    GameSetting_ConstrAndReg_float
0x9EEBD5: push    offset sub_A205B0; void (__cdecl *)()
0x9EEBDA: call    _atexit
0x9EEBDF: pop     ecx
0x9EEBE0: retn
