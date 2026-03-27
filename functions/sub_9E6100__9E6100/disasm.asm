0x9E6100: fld1
0x9E6102: push    ecx
0x9E6103: fstp    [esp+4+var_4]; float
0x9E6106: mov     ecx, offset fStarsRotateZAxis
0x9E610B: push    offset aFstarsrotateza; "fStarsRotateZAxis"
0x9E6110: call    GameSetting_ConstrAndReg_float
0x9E6115: push    offset sub_A1D410; void (__cdecl *)()
0x9E611A: call    _atexit
0x9E611F: pop     ecx
0x9E6120: retn
