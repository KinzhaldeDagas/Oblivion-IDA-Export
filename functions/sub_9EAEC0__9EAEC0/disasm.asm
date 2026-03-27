0x9EAEC0: fld     ds:flt_A2FAAC
0x9EAEC6: push    ecx
0x9EAEC7: fstp    [esp+4+var_4]; float
0x9EAECA: push    offset aFmoveswimrunat; "fMoveSwimRunAthleticsMult"
0x9EAECF: mov     ecx, offset fMoveSwimRunAthleticsMult
0x9EAED4: call    GameSetting_ConstrAndReg_float
0x9EAED9: push    offset sub_A1EFB0; void (__cdecl *)()
0x9EAEDE: call    _atexit
0x9EAEE3: pop     ecx
0x9EAEE4: retn
