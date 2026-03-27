0x9EA2B0: fld     ds:flt_A37450
0x9EA2B6: push    ecx
0x9EA2B7: fstp    [esp+4+var_4]; float
0x9EA2BA: push    offset aFaicombatunrea; "fAICombatUnreachableTargetPriorityMult"
0x9EA2BF: mov     ecx, offset flt_B37218
0x9EA2C4: call    GameSetting_ConstrAndReg_float
0x9EA2C9: push    offset sub_A1EB50; void (__cdecl *)()
0x9EA2CE: call    _atexit
0x9EA2D3: pop     ecx
0x9EA2D4: retn
