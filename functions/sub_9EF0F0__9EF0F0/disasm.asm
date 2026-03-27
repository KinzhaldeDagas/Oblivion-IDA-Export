0x9EF0F0: fld     ds:flt_A3D8F0
0x9EF0F6: push    ecx
0x9EF0F7: fstp    [esp+4+var_4]; float
0x9EF0FA: push    offset aFmagictelekine; "fMagicTelekinesisMoveBase"
0x9EF0FF: mov     ecx, offset fMagicTelekinesisMoveBase
0x9EF104: call    GameSetting_ConstrAndReg_float
0x9EF109: push    offset sub_A20770; void (__cdecl *)()
0x9EF10E: call    _atexit
0x9EF113: pop     ecx
0x9EF114: retn
