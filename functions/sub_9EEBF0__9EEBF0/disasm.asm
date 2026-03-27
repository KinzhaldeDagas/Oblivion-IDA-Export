0x9EEBF0: fld     ds:flt_A43328
0x9EEBF6: push    ecx
0x9EEBF7: fstp    [esp+4+var_4]; float
0x9EEBFA: push    offset aFmagicarmorpen; "fMagicArmorPenaltyMin"
0x9EEBFF: mov     ecx, offset fMagicArmorPenaltyMin
0x9EEC04: call    GameSetting_ConstrAndReg_float
0x9EEC09: push    offset sub_A205C0; void (__cdecl *)()
0x9EEC0E: call    _atexit
0x9EEC13: pop     ecx
0x9EEC14: retn
