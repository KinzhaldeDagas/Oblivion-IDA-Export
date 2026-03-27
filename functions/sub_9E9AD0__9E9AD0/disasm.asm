0x9E9AD0: fld     ds:flt_A47E6C
0x9E9AD6: push    ecx
0x9E9AD7: fstp    [esp+4+var_4]; float
0x9E9ADA: push    offset aFarrowbowtim_0; "fArrowBowTimerMult"
0x9E9ADF: mov     ecx, offset fArrowBowTimerMult
0x9E9AE4: call    GameSetting_ConstrAndReg_float
0x9E9AE9: push    offset sub_A1E830; void (__cdecl *)()
0x9E9AEE: call    _atexit
0x9E9AF3: pop     ecx
0x9E9AF4: retn
