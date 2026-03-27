0x9E6870: fld1
0x9E6872: push    ecx
0x9E6873: fstp    [esp+4+var_4]; float
0x9E6876: mov     ecx, offset fDispTargetPerMult
0x9E687B: push    offset aFdisptargetp_0; "fDispTargetPerMult"
0x9E6880: call    GameSetting_ConstrAndReg_float
0x9E6885: push    offset sub_A1D6C0; void (__cdecl *)()
0x9E688A: call    _atexit
0x9E688F: pop     ecx
0x9E6890: retn
