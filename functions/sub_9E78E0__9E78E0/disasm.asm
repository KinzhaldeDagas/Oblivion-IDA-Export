0x9E78E0: fld     ds:flt_A374BC
0x9E78E6: push    ecx
0x9E78E7: fstp    [esp+4+var_4]; float
0x9E78EA: push    offset aFaitalktosamen; "fAItalktosameNPCtimer"
0x9E78EF: mov     ecx, offset unk_B36AA8
0x9E78F4: call    GameSetting_ConstrAndReg_float
0x9E78F9: push    offset sub_A1DC70; void (__cdecl *)()
0x9E78FE: call    _atexit
0x9E7903: pop     ecx
0x9E7904: retn
