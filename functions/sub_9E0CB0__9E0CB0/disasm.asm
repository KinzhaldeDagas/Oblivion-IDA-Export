0x9E0CB0: fldz
0x9E0CB2: push    ecx
0x9E0CB3: fstp    [esp+4+var_4]; float
0x9E0CB6: mov     ecx, offset fAIDefaultDodgeFatigueBase
0x9E0CBB: push    offset aFaidefaultdo_5; "fAIDefaultDodgeFatigueBase"
0x9E0CC0: call    GameSetting_ConstrAndReg_float
0x9E0CC5: push    offset sub_A1AC60; void (__cdecl *)()
0x9E0CCA: call    _atexit
0x9E0CCF: pop     ecx
0x9E0CD0: retn
