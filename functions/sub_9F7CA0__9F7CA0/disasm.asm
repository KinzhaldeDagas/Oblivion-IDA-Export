0x9F7CA0: fld     ds:flt_A63CBC
0x9F7CA6: push    ecx
0x9F7CA7: fstp    [esp+4+var_4]; float
0x9F7CAA: push    offset aFlockpickautob; "fLockPickAutoBase"
0x9F7CAF: mov     ecx, offset flt_B39498
0x9F7CB4: call    GameSetting_ConstrAndReg_float
0x9F7CB9: push    offset sub_A23050; void (__cdecl *)()
0x9F7CBE: call    _atexit
0x9F7CC3: pop     ecx
0x9F7CC4: retn
