0x9EA500: fld1
0x9EA502: push    ecx
0x9EA503: fstp    [esp+4+var_4]; float
0x9EA506: mov     ecx, offset flt_B37290
0x9EA50B: push    offset aFcombatinthewa; "fCombatInTheWayTimer"
0x9EA510: call    GameSetting_ConstrAndReg_float
0x9EA515: push    offset sub_A1EC40; void (__cdecl *)()
0x9EA51A: call    _atexit
0x9EA51F: pop     ecx
0x9EA520: retn
