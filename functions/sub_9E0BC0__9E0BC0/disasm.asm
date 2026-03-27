0x9E0BC0: fld     ds:flt_A2FE78
0x9E0BC6: push    ecx
0x9E0BC7: fstp    [esp+4+var_4]; float
0x9E0BCA: push    offset aFaidefaultswit; "fAIDefaultSwitchToMeleeDistance"
0x9E0BCF: mov     ecx, offset fAIDefaultSwitchToMeleeDistance
0x9E0BD4: call    GameSetting_ConstrAndReg_float
0x9E0BD9: push    offset sub_A1AC10; void (__cdecl *)()
0x9E0BDE: call    _atexit
0x9E0BE3: pop     ecx
0x9E0BE4: retn
