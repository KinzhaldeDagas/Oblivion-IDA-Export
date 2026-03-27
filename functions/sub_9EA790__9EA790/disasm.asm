0x9EA790: fld     ds:flt_A2FE7C
0x9EA796: push    ecx
0x9EA797: fstp    [esp+4+var_4]; float
0x9EA79A: push    offset aFcombatrelativ; "fCombatRelativeDamageMod"
0x9EA79F: mov     ecx, offset flt_B37310
0x9EA7A4: call    GameSetting_ConstrAndReg_float
0x9EA7A9: push    offset sub_A1ED40; void (__cdecl *)()
0x9EA7AE: call    _atexit
0x9EA7B3: pop     ecx
0x9EA7B4: retn
