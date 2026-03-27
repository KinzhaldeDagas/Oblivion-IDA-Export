0x9EB480: fldz
0x9EB482: push    ecx
0x9EB483: fstp    [esp+4+var_4]; float
0x9EB486: mov     ecx, offset fFatigueReturnMult
0x9EB48B: push    offset aFfatigueretu_0; "fFatigueReturnMult"
0x9EB490: call    GameSetting_ConstrAndReg_float
0x9EB495: push    offset sub_A1F1B0; void (__cdecl *)()
0x9EB49A: call    _atexit
0x9EB49F: pop     ecx
0x9EB4A0: retn
