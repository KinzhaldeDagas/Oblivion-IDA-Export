0x9EAD70: fldz
0x9EAD72: push    ecx
0x9EAD73: fstp    [esp+4+var_4]; float
0x9EAD76: mov     ecx, offset fMoveWeightMin
0x9EAD7B: push    offset aFmoveweightmin; "fMoveWeightMin"
0x9EAD80: call    GameSetting_ConstrAndReg_float
0x9EAD85: push    offset sub_A1EF40; void (__cdecl *)()
0x9EAD8A: call    _atexit
0x9EAD8F: pop     ecx
0x9EAD90: retn
