0x9EFBB0: fld     ds:fConstant_2
0x9EFBB6: push    ecx
0x9EFBB7: fstp    [esp+4+var_4]; float
0x9EFBBA: push    offset aFabsorbtortuos; "fAbsorbTortuosityVariance"
0x9EFBBF: mov     ecx, offset fAbsorbTortuosityVariance
0x9EFBC4: call    GameSetting_ConstrAndReg_float
0x9EFBC9: push    offset sub_A20B40; void (__cdecl *)()
0x9EFBCE: call    _atexit
0x9EFBD3: pop     ecx
0x9EFBD4: retn
