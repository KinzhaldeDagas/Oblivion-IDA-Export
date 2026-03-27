0x9E8780: fld     ds:flt_A56F84
0x9E8786: push    ecx
0x9E8787: fstp    [esp+4+var_4]; float
0x9E878A: push    offset aFaifleeconfbas; "fAIFleeConfBase"
0x9E878F: mov     ecx, offset flt_B36D38
0x9E8794: call    GameSetting_ConstrAndReg_float
0x9E8799: push    offset sub_A1E190; void (__cdecl *)()
0x9E879E: call    _atexit
0x9E87A3: pop     ecx
0x9E87A4: retn
