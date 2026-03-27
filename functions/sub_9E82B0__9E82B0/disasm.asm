0x9E82B0: fld     ds:flt_A524B0
0x9E82B6: push    ecx
0x9E82B7: fstp    [esp+4+var_4]; float
0x9E82BA: push    offset aFbowholdtimer; "fBowHoldTimer"
0x9E82BF: mov     ecx, offset fBowHoldTimer
0x9E82C4: call    GameSetting_ConstrAndReg_float
0x9E82C9: push    offset sub_A1DFE0; void (__cdecl *)()
0x9E82CE: call    _atexit
0x9E82D3: pop     ecx
0x9E82D4: retn
