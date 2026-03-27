0x9F7CD0: fld     ds:flt_A63CD4
0x9F7CD6: push    ecx
0x9F7CD7: fstp    [esp+4+var_4]; float
0x9F7CDA: push    offset aFlockpickautoo; "fLockPickAutoOffset"
0x9F7CDF: mov     ecx, offset flt_B394A0
0x9F7CE4: call    GameSetting_ConstrAndReg_float
0x9F7CE9: push    offset sub_A23060; void (__cdecl *)()
0x9F7CEE: call    _atexit
0x9F7CF3: pop     ecx
0x9F7CF4: retn
