0x9EEB00: fld1
0x9EEB02: push    ecx
0x9EEB03: fstp    [esp+4+var_4]; float
0x9EEB06: mov     ecx, offset flt_B37F28
0x9EEB0B: push    offset aFmagiccloudare; "fMagicCloudAreaMin"
0x9EEB10: call    GameSetting_ConstrAndReg_float
0x9EEB15: push    offset sub_A20570; void (__cdecl *)()
0x9EEB1A: call    _atexit
0x9EEB1F: pop     ecx
0x9EEB20: retn
