0x9E7640: fld     ds:flt_A43328
0x9E7646: push    ecx
0x9E7647: fstp    [esp+4+var_4]; float
0x9E764A: push    offset aFlockpickbreak; "fLockPickBreakBase"
0x9E764F: mov     ecx, offset unk_B36A28
0x9E7654: call    GameSetting_ConstrAndReg_float
0x9E7659: push    offset sub_A1DB70; void (__cdecl *)()
0x9E765E: call    _atexit
0x9E7663: pop     ecx
0x9E7664: retn
