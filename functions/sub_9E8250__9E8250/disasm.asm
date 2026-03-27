0x9E8250: fld     ds:flt_A34ABC
0x9E8256: push    ecx
0x9E8257: fstp    [esp+4+var_4]; float
0x9E825A: push    offset aFdistanceinter; "fDistanceInteriorReactCombat"
0x9E825F: mov     ecx, offset unk_B36C50
0x9E8264: call    GameSetting_ConstrAndReg_float
0x9E8269: push    offset sub_A1DFC0; void (__cdecl *)()
0x9E826E: call    _atexit
0x9E8273: pop     ecx
0x9E8274: retn
