0x9EB540: fld     ds:flt_A46B10
0x9EB546: push    ecx
0x9EB547: fstp    [esp+4+var_4]; float
0x9EB54A: push    offset aFfatiguejumpmu; "fFatigueJumpMult"
0x9EB54F: mov     ecx, offset fFatigueJumpMult
0x9EB554: call    GameSetting_ConstrAndReg_float
0x9EB559: push    offset sub_A1F1F0; void (__cdecl *)()
0x9EB55E: call    _atexit
0x9EB563: pop     ecx
0x9EB564: retn
