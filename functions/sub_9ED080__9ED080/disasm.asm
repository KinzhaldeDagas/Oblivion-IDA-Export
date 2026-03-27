0x9ED080: fld     ds:flt_A31E2C
0x9ED086: push    ecx
0x9ED087: fstp    [esp+4+var_4]; float
0x9ED08A: push    offset aFtorchevaluati; "fTorchEvaluationTimer"
0x9ED08F: mov     ecx, offset fTorchEvaluationTimer
0x9ED094: call    GameSetting_ConstrAndReg_float
0x9ED099: push    offset sub_A1FBD0; void (__cdecl *)()
0x9ED09E: call    _atexit
0x9ED0A3: pop     ecx
0x9ED0A4: retn
