0x9EE1A0: fld1
0x9EE1A2: push    ecx
0x9EE1A3: fstp    [esp+4+var_4]; float
0x9EE1A6: mov     ecx, offset flt_B37D98
0x9EE1AB: push    offset aFskillusefacto; "fSkillUseFactor"
0x9EE1B0: call    GameSetting_ConstrAndReg_float
0x9EE1B5: push    offset sub_A20250; void (__cdecl *)()
0x9EE1BA: call    _atexit
0x9EE1BF: pop     ecx
0x9EE1C0: retn
