0x9EB510: fld     ds:flt_A46B10
0x9EB516: push    ecx
0x9EB517: fstp    [esp+4+var_4]; float
0x9EB51A: push    offset aFfatiguejumpba; "fFatigueJumpBase"
0x9EB51F: mov     ecx, offset fFatigueJumpBase
0x9EB524: call    GameSetting_ConstrAndReg_float
0x9EB529: push    offset sub_A1F1E0; void (__cdecl *)()
0x9EB52E: call    _atexit
0x9EB533: pop     ecx
0x9EB534: retn
