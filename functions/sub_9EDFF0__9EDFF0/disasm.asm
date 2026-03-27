0x9EDFF0: fld     ds:flt_A31C80
0x9EDFF6: push    ecx
0x9EDFF7: fstp    [esp+4+var_4]; float
0x9EDFFA: push    offset aFremoveexcessd; "fRemoveExcessDeadTime"
0x9EDFFF: mov     ecx, offset flt_B37D40
0x9EE004: call    GameSetting_ConstrAndReg_float
0x9EE009: push    offset sub_A201A0; void (__cdecl *)()
0x9EE00E: call    _atexit
0x9EE013: pop     ecx
0x9EE014: retn
