0x9E0C80: fld     ds:flt_A415E4
0x9E0C86: push    ecx
0x9E0C87: fstp    [esp+4+var_4]; float
0x9E0C8A: push    offset aFaidefaultgrou; "fAIDefaultGroupStandoffDistance"
0x9E0C8F: mov     ecx, offset fAIDefaultGroupStandoffDistance
0x9E0C94: call    GameSetting_ConstrAndReg_float
0x9E0C99: push    offset sub_A1AC50; void (__cdecl *)()
0x9E0C9E: call    _atexit
0x9E0CA3: pop     ecx
0x9E0CA4: retn
