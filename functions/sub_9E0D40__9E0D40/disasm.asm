0x9E0D40: fld1
0x9E0D42: push    ecx
0x9E0D43: fstp    [esp+4+var_4]; float
0x9E0D46: mov     ecx, offset fAIDefaultDodgeSpeedMult
0x9E0D4B: push    offset aFaidefaultdo_8; "fAIDefaultDodgeSpeedMult"
0x9E0D50: call    GameSetting_ConstrAndReg_float
0x9E0D55: push    offset sub_A1AC90; void (__cdecl *)()
0x9E0D5A: call    _atexit
0x9E0D5F: pop     ecx
0x9E0D60: retn
