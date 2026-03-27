0x9EF060: fld     ds:flt_A58180
0x9EF066: push    ecx
0x9EF067: fstp    [esp+4+var_4]; float
0x9EF06A: push    offset aFmagiclightfor; "fMagicLightForwardOffset"
0x9EF06F: mov     ecx, offset fMagicLightForwardOffset
0x9EF074: call    GameSetting_ConstrAndReg_float
0x9EF079: push    offset sub_A20740; void (__cdecl *)()
0x9EF07E: call    _atexit
0x9EF083: pop     ecx
0x9EF084: retn
