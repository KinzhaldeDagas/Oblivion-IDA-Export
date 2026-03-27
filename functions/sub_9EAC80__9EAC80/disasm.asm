0x9EAC80: fld     ds:dword_A46C30
0x9EAC86: push    ecx
0x9EAC87: fstp    [esp+4+var_4]; float
0x9EAC8A: push    offset aFmoverunmult; "fMoveRunMult"
0x9EAC8F: mov     ecx, offset fMoveRunMult
0x9EAC94: call    GameSetting_ConstrAndReg_float
0x9EAC99: push    offset sub_A1EEF0; void (__cdecl *)()
0x9EAC9E: call    _atexit
0x9EACA3: pop     ecx
0x9EACA4: retn
