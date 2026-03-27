0x9E6FC0: fld     ds:flt_A342A0
0x9E6FC6: push    ecx
0x9E6FC7: fstp    [esp+4+var_4]; float
0x9E6FCA: push    offset aFairadiustorun; "fAIRadiusToRunDetectionExterior"
0x9E6FCF: mov     ecx, offset unk_B36910
0x9E6FD4: call    GameSetting_ConstrAndReg_float
0x9E6FD9: push    offset sub_A1D940; void (__cdecl *)()
0x9E6FDE: call    _atexit
0x9E6FE3: pop     ecx
0x9E6FE4: retn
