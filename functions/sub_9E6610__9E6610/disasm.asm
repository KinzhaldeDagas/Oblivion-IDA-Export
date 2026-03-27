0x9E6610: fld1
0x9E6612: push    ecx
0x9E6613: fstp    [esp+4+var_4]; float
0x9E6616: mov     ecx, offset fCrimeSoundMult
0x9E661B: push    offset aFcrimesoundmul; "fCrimeSoundMult"
0x9E6620: call    GameSetting_ConstrAndReg_float
0x9E6625: push    offset sub_A1D5E0; void (__cdecl *)()
0x9E662A: call    _atexit
0x9E662F: pop     ecx
0x9E6630: retn
