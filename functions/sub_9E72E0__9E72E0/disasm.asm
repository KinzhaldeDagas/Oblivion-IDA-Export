0x9E72E0: fldz
0x9E72E2: push    ecx
0x9E72E3: fstp    [esp+4+var_4]; float
0x9E72E6: mov     ecx, offset flt_B36998
0x9E72EB: push    offset aFaiidlewaittim; "fAIIdleWaitTime"
0x9E72F0: call    GameSetting_ConstrAndReg_float
0x9E72F5: push    offset sub_A1DA50; void (__cdecl *)()
0x9E72FA: call    _atexit
0x9E72FF: pop     ecx
0x9E7300: retn
