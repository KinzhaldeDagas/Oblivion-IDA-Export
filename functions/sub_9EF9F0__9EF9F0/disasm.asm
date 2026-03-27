0x9EF9F0: fld     ds:dword_A46C30
0x9EF9F6: push    ecx
0x9EF9F7: fstp    [esp+4+var_4]; float
0x9EF9FA: push    offset aFshockbranch_0; "fShockBranchBoltsRadiusStrength"
0x9EF9FF: mov     ecx, offset fShockBranchBoltsRadiusStrength
0x9EFA04: call    GameSetting_ConstrAndReg_float
0x9EFA09: push    offset sub_A20AA0; void (__cdecl *)()
0x9EFA0E: call    _atexit
0x9EFA13: pop     ecx
0x9EFA14: retn
