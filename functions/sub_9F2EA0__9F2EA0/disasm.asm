0x9F2EA0: fld     ds:flt_A3D8F4
0x9F2EA6: push    ecx
0x9F2EA7: fstp    [esp+4+var_4]; float
0x9F2EAA: push    offset aFdispositionre; "fDispositionReduction"
0x9F2EAF: mov     ecx, offset fDispositionReduction
0x9F2EB4: call    GameSetting_ConstrAndReg_float
0x9F2EB9: push    offset sub_A22370; void (__cdecl *)()
0x9F2EBE: call    _atexit
0x9F2EC3: pop     ecx
0x9F2EC4: retn
