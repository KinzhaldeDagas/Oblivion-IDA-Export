0x9EAD40: fld     ds:flt_A34ABC
0x9EAD46: push    ecx
0x9EAD47: fstp    [esp+4+var_4]; float
0x9EAD4A: push    offset aFmovecreatur_0; "fMoveCreatureWalkMax"
0x9EAD4F: mov     ecx, offset fMoveCreatureWalkMax
0x9EAD54: call    GameSetting_ConstrAndReg_float
0x9EAD59: push    offset sub_A1EF30; void (__cdecl *)()
0x9EAD5E: call    _atexit
0x9EAD63: pop     ecx
0x9EAD64: retn
