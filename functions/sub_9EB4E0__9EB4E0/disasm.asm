0x9EB4E0: fldz
0x9EB4E2: push    ecx
0x9EB4E3: fstp    [esp+4+var_4]; float
0x9EB4E6: mov     ecx, offset fFatigueRunMult
0x9EB4EB: push    offset aFfatiguerunmul; "fFatigueRunMult"
0x9EB4F0: call    GameSetting_ConstrAndReg_float
0x9EB4F5: push    offset sub_A1F1D0; void (__cdecl *)()
0x9EB4FA: call    _atexit
0x9EB4FF: pop     ecx
0x9EB500: retn
