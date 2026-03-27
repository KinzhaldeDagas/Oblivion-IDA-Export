0x9ECC90: fld     ds:flt_A37450
0x9ECC96: push    ecx
0x9ECC97: fstp    [esp+4+var_4]; float
0x9ECC9A: push    offset aFrepaircostmul; "fRepairCostMult"
0x9ECC9F: mov     ecx, offset fRepairCostMult
0x9ECCA4: call    GameSetting_ConstrAndReg_float
0x9ECCA9: push    offset sub_A1FA80; void (__cdecl *)()
0x9ECCAE: call    _atexit
0x9ECCB3: pop     ecx
0x9ECCB4: retn
