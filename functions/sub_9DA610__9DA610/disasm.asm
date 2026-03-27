0x9DA610: fld     ds:flt_A34A80
0x9DA616: push    ecx
0x9DA617: fstp    [esp+4+var_4]; float
0x9DA61A: push    offset aFmagicfogmaxim; "fMagicFogMaximumDistance"
0x9DA61F: mov     ecx, offset fMagicFogMaximumDistance
0x9DA624: call    GameSetting_ConstrAndReg_float
0x9DA629: push    offset sub_A17870; void (__cdecl *)()
0x9DA62E: call    _atexit
0x9DA633: pop     ecx
0x9DA634: retn
