0x9E0BF0: fld     ds:flt_A342A4
0x9E0BF6: push    ecx
0x9E0BF7: fstp    [esp+4+var_4]; float
0x9E0BFA: push    offset aFaidefaultsw_0; "fAIDefaultSwitchToRangedDistance"
0x9E0BFF: mov     ecx, offset fAIDefaultSwitchToRangedDistance
0x9E0C04: call    GameSetting_ConstrAndReg_float
0x9E0C09: push    offset sub_A1AC20; void (__cdecl *)()
0x9E0C0E: call    _atexit
0x9E0C13: pop     ecx
0x9E0C14: retn
