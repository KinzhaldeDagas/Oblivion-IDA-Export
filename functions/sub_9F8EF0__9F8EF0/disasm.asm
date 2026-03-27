0x9F8EF0: fld     ds:flt_A2FF44
0x9F8EF6: push    ecx
0x9F8EF7: fstp    [esp+4+var_4]; float
0x9F8EFA: push    offset aFtreeneardista; "fTreeNearDistanceBase"
0x9F8EFF: mov     ecx, offset fTreeNearDistanceBase
0x9F8F04: call    GameSetting_ConstrAndReg_float
0x9F8F09: push    offset sub_A23560; void (__cdecl *)()
0x9F8F0E: call    _atexit
0x9F8F13: pop     ecx
0x9F8F14: retn
