0x9ECEA0: fld     ds:flt_A59E38
0x9ECEA6: push    ecx
0x9ECEA7: fstp    [esp+4+var_4]; float
0x9ECEAA: push    offset aFpotiont1alema; "fPotionT1AleMagMult"
0x9ECEAF: mov     ecx, offset fPotionT1AleMagMult
0x9ECEB4: call    GameSetting_ConstrAndReg_float
0x9ECEB9: push    offset sub_A1FB30; void (__cdecl *)()
0x9ECEBE: call    _atexit
0x9ECEC3: pop     ecx
0x9ECEC4: retn
