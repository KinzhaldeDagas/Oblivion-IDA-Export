0x9ECE10: fld     ds:flt_A5ACDC
0x9ECE16: push    ecx
0x9ECE17: fstp    [esp+4+var_4]; float
0x9ECE1A: push    offset aFpotiont1retdu; "fPotionT1RetDurMult"
0x9ECE1F: mov     ecx, offset fPotionT1RetDurMult
0x9ECE24: call    GameSetting_ConstrAndReg_float
0x9ECE29: push    offset sub_A1FB00; void (__cdecl *)()
0x9ECE2E: call    _atexit
0x9ECE33: pop     ecx
0x9ECE34: retn
