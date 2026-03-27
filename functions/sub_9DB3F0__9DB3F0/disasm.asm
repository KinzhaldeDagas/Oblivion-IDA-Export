0x9DB3F0: fld     ds:fConstant_2
0x9DB3F6: push    ecx
0x9DB3F7: fstp    [esp+4+var_4]; float
0x9DB3FA: push    offset aFdebrisminexte; "fDebrisMinExtent"
0x9DB3FF: mov     ecx, offset flt_B33A38
0x9DB404: call    GameSetting_ConstrAndReg_float
0x9DB409: push    offset sub_A17F60; void (__cdecl *)()
0x9DB40E: call    _atexit
0x9DB413: pop     ecx
0x9DB414: retn
