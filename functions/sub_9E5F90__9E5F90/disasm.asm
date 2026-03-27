0x9E5F90: fld     ds:flt_A342A4
0x9E5F96: push    ecx
0x9E5F97: fstp    [esp+4+var_4]; float
0x9E5F9A: push    offset aFunderwaterful; "fUnderwaterFullDepth"
0x9E5F9F: mov     ecx, offset flt_B36660
0x9E5FA4: call    GameSetting_ConstrAndReg_float
0x9E5FA9: push    offset sub_A1D390; void (__cdecl *)()
0x9E5FAE: call    _atexit
0x9E5FB3: pop     ecx
0x9E5FB4: retn
