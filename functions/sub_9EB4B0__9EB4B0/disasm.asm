0x9EB4B0: fld     ds:flt_A58E1C
0x9EB4B6: push    ecx
0x9EB4B7: fstp    [esp+4+var_4]; float
0x9EB4BA: push    offset aFfatiguerunbas; "fFatigueRunBase"
0x9EB4BF: mov     ecx, offset fFatigueRunBase
0x9EB4C4: call    GameSetting_ConstrAndReg_float
0x9EB4C9: push    offset sub_A1F1C0; void (__cdecl *)()
0x9EB4CE: call    _atexit
0x9EB4D3: pop     ecx
0x9EB4D4: retn
