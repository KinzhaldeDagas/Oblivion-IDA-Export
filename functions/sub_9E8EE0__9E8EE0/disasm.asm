0x9E8EE0: fld     ds:flt_A417B4
0x9E8EE6: push    ecx
0x9E8EE7: fstp    [esp+4+var_4]; float
0x9E8EEA: push    offset aFhandhealthmax; "fHandHealthMax"
0x9E8EEF: mov     ecx, offset fHandHealthMax
0x9E8EF4: call    GameSetting_ConstrAndReg_float
0x9E8EF9: push    offset sub_A1E410; void (__cdecl *)()
0x9E8EFE: call    _atexit
0x9E8F03: pop     ecx
0x9E8F04: retn
