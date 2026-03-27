0x9E8830: fldz
0x9E8832: push    ecx
0x9E8833: fstp    [esp+4+var_4]; float
0x9E8836: mov     ecx, offset flt_B36D58
0x9E883B: push    offset aFaiyieldbase; "fAIYieldBase"
0x9E8840: call    GameSetting_ConstrAndReg_float
0x9E8845: push    offset sub_A1E1D0; void (__cdecl *)()
0x9E884A: call    _atexit
0x9E884F: pop     ecx
0x9E8850: retn
