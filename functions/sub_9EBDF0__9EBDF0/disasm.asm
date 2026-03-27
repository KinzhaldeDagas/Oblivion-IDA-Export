0x9EBDF0: fld     ds:flt_A3D65C
0x9EBDF6: push    ecx
0x9EBDF7: fstp    [esp+4+var_4]; float
0x9EBDFA: push    offset aFpcbasemagicka; "fPCBaseMagickaMult"
0x9EBDFF: mov     ecx, offset fPCBaseMagickaMult
0x9EBE04: call    GameSetting_ConstrAndReg_float
0x9EBE09: push    offset sub_A1F540; void (__cdecl *)()
0x9EBE0E: call    _atexit
0x9EBE13: pop     ecx
0x9EBE14: retn
