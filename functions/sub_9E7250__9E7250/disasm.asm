0x9E7250: fldz
0x9E7252: push    ecx
0x9E7253: fstp    [esp+4+var_4]; float
0x9E7256: mov     ecx, offset flt_B36980
0x9E725B: push    offset aFaienergylevel; "fAIEnergyLevelBase"
0x9E7260: call    GameSetting_ConstrAndReg_float
0x9E7265: push    offset sub_A1DA20; void (__cdecl *)()
0x9E726A: call    _atexit
0x9E726F: pop     ecx
0x9E7270: retn
