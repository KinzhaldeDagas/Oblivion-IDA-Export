0x9F7C70: fld     ds:flt_A63CA4
0x9F7C76: push    ecx
0x9F7C77: fstp    [esp+4+var_4]; float
0x9F7C7A: push    offset aFlockpickautod; "fLockPickAutoDifficulty"
0x9F7C7F: mov     ecx, offset flt_B39490
0x9F7C84: call    GameSetting_ConstrAndReg_float
0x9F7C89: push    offset sub_A23040; void (__cdecl *)()
0x9F7C8E: call    _atexit
0x9F7C93: pop     ecx
0x9F7C94: retn
