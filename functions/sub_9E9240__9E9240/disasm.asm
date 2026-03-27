0x9E9240: fld     ds:flt_A56670
0x9E9246: push    ecx
0x9E9247: fstp    [esp+4+var_4]; float
0x9E924A: push    offset aFcombatminenga; "fCombatMinEngageDistance"
0x9E924F: mov     ecx, offset fCombatMinEngageDistance
0x9E9254: call    GameSetting_ConstrAndReg_float
0x9E9259: push    offset sub_A1E550; void (__cdecl *)()
0x9E925E: call    _atexit
0x9E9263: pop     ecx
0x9E9264: retn
