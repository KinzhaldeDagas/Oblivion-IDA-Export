0x9ECF60: fld     ds:flt_A5AD74
0x9ECF66: push    ecx
0x9ECF67: fstp    [esp+4+var_4]; float
0x9ECF6A: push    offset aFpotiont2aledu; "fPotionT2AleDurMult"
0x9ECF6F: mov     ecx, offset fPotionT2AleDurMult
0x9ECF74: call    GameSetting_ConstrAndReg_float
0x9ECF79: push    offset sub_A1FB70; void (__cdecl *)()
0x9ECF7E: call    _atexit
0x9ECF83: pop     ecx
0x9ECF84: retn
