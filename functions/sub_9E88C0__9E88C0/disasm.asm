0x9E88C0: fld     ds:dword_A46C30
0x9E88C6: push    ecx
0x9E88C7: fstp    [esp+4+var_4]; float
0x9E88CA: push    offset aFaiyielddura_0; "fAIYieldDurationMult"
0x9E88CF: mov     ecx, offset flt_B36D70
0x9E88D4: call    GameSetting_ConstrAndReg_float
0x9E88D9: push    offset sub_A1E200; void (__cdecl *)()
0x9E88DE: call    _atexit
0x9E88E3: pop     ecx
0x9E88E4: retn
