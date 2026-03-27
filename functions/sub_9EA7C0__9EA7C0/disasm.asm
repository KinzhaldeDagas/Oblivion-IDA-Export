0x9EA7C0: fld     ds:flt_A3D65C
0x9EA7C6: push    ecx
0x9EA7C7: fstp    [esp+4+var_4]; float
0x9EA7CA: push    offset aFcombatdamages; "fCombatDamageScale"
0x9EA7CF: mov     ecx, offset flt_B37318
0x9EA7D4: call    GameSetting_ConstrAndReg_float
0x9EA7D9: push    offset sub_A1ED50; void (__cdecl *)()
0x9EA7DE: call    _atexit
0x9EA7E3: pop     ecx
0x9EA7E4: retn
