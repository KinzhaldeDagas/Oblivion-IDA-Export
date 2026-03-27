0x9EBF30: fld1
0x9EBF32: push    ecx
0x9EBF33: fstp    [esp+4+var_4]; float
0x9EBF36: mov     ecx, offset fTrainingCostMult
0x9EBF3B: push    offset aFtrainingcostm; "fTrainingCostMult"
0x9EBF40: call    GameSetting_ConstrAndReg_float
0x9EBF45: push    offset sub_A1F5B0; void (__cdecl *)()
0x9EBF4A: call    _atexit
0x9EBF4F: pop     ecx
0x9EBF50: retn
