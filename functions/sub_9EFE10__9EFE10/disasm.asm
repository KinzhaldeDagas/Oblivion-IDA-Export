0x9EFE10: fld     ds:flt_A3D65C
0x9EFE16: push    ecx
0x9EFE17: fstp    [esp+4+var_4]; float
0x9EFE1A: push    offset aFscrollcostmul; "fScrollCostMult"
0x9EFE1F: mov     ecx, offset fScrollCostMult
0x9EFE24: call    GameSetting_ConstrAndReg_float
0x9EFE29: push    offset sub_A20C10; void (__cdecl *)()
0x9EFE2E: call    _atexit
0x9EFE33: pop     ecx
0x9EFE34: retn
