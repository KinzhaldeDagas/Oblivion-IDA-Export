0x9EA850: fld     ds:flt_A5982C
0x9EA856: push    ecx
0x9EA857: fstp    [esp+4+var_4]; float
0x9EA85A: push    offset aFaicombatslope; "fAICombatSlopeDifference"
0x9EA85F: mov     ecx, offset fAICombatSlopeDifference
0x9EA864: call    GameSetting_ConstrAndReg_float
0x9EA869: push    offset sub_A1ED80; void (__cdecl *)()
0x9EA86E: call    _atexit
0x9EA873: pop     ecx
0x9EA874: retn
