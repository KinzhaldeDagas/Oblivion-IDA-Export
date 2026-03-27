0x9E6ED0: fld     ds:flt_A578C0
0x9E6ED6: push    ecx
0x9E6ED7: fstp    [esp+4+var_4]; float
0x9E6EDA: push    offset aFaiacquireobje; "fAIAcquireObjectDistance"
0x9E6EDF: mov     ecx, offset fAIAcquireObjectDistance
0x9E6EE4: call    GameSetting_ConstrAndReg_float
0x9E6EE9: push    offset sub_A1D8F0; void (__cdecl *)()
0x9E6EEE: call    _atexit
0x9E6EF3: pop     ecx
0x9E6EF4: retn
