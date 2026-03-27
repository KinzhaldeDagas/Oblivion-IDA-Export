0x9EA7F0: fld     ds:flt_A57A64
0x9EA7F6: push    ecx
0x9EA7F7: fstp    [esp+4+var_4]; float
0x9EA7FA: push    offset aFcombatdista_0; "fCombatDistanceMin"
0x9EA7FF: mov     ecx, offset flt_B37320
0x9EA804: call    GameSetting_ConstrAndReg_float
0x9EA809: push    offset sub_A1ED60; void (__cdecl *)()
0x9EA80E: call    _atexit
0x9EA813: pop     ecx
0x9EA814: retn
