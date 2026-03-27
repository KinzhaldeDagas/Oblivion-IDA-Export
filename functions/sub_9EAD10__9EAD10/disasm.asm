0x9EAD10: fld     ds:flt_A31E2C
0x9EAD16: push    ecx
0x9EAD17: fstp    [esp+4+var_4]; float
0x9EAD1A: push    offset aFmovecreaturew; "fMoveCreatureWalkMin"
0x9EAD1F: mov     ecx, offset fMoveCreatureWalkMin
0x9EAD24: call    GameSetting_ConstrAndReg_float
0x9EAD29: push    offset sub_A1EF20; void (__cdecl *)()
0x9EAD2E: call    _atexit
0x9EAD33: pop     ecx
0x9EAD34: retn
