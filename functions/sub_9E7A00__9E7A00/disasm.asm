0x9E7A00: fld     ds:flt_A44BA4
0x9E7A06: push    ecx
0x9E7A07: fstp    [esp+4+var_4]; float
0x9E7A0A: push    offset aFaimingreeting; "fAIMinGreetingDistance"
0x9E7A0F: mov     ecx, offset unk_B36AD8
0x9E7A14: call    GameSetting_ConstrAndReg_float
0x9E7A19: push    offset sub_A1DCD0; void (__cdecl *)()
0x9E7A1E: call    _atexit
0x9E7A23: pop     ecx
0x9E7A24: retn
