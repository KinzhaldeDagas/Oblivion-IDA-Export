0x9E0B90: fld1
0x9E0B92: push    ecx
0x9E0B93: fstp    [esp+4+var_4]; float
0x9E0B96: mov     ecx, offset flt_B35668
0x9E0B9B: push    offset aFaidefaultmaxi; "fAIDefaultMaximumRangeMult"
0x9E0BA0: call    GameSetting_ConstrAndReg_float
0x9E0BA5: push    offset sub_A1AC00; void (__cdecl *)()
0x9E0BAA: call    _atexit
0x9E0BAF: pop     ecx
0x9E0BB0: retn
