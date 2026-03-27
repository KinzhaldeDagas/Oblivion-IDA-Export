0x9EF9C0: fld     ds:flt_A2F930
0x9EF9C6: push    ecx
0x9EF9C7: fstp    [esp+4+var_4]; float
0x9EF9CA: push    offset aFshockbranchbo; "fShockBranchBoltsRadius"
0x9EF9CF: mov     ecx, offset fShockBranchBoltsRadius
0x9EF9D4: call    GameSetting_ConstrAndReg_float
0x9EF9D9: push    offset sub_A20A90; void (__cdecl *)()
0x9EF9DE: call    _atexit
0x9EF9E3: pop     ecx
0x9EF9E4: retn
