0x9EA1C0: fld     ds:flt_A44F70
0x9EA1C6: push    ecx
0x9EA1C7: fstp    [esp+4+var_4]; float
0x9EA1CA: push    offset aFdeathforcef_0; "fDeathForceForceMax"
0x9EA1CF: mov     ecx, offset flt_B371E8
0x9EA1D4: call    GameSetting_ConstrAndReg_float
0x9EA1D9: push    offset sub_A1EAF0; void (__cdecl *)()
0x9EA1DE: call    _atexit
0x9EA1E3: pop     ecx
0x9EA1E4: retn
