0x9EC800: fld     ds:flt_A3744C
0x9EC806: push    ecx
0x9EC807: fstp    [esp+4+var_4]; float
0x9EC80A: push    offset aFdemandmult; "fDemandMult"
0x9EC80F: mov     ecx, offset fDemandMult
0x9EC814: call    GameSetting_ConstrAndReg_float
0x9EC819: push    offset sub_A1F8E0; void (__cdecl *)()
0x9EC81E: call    _atexit
0x9EC823: pop     ecx
0x9EC824: retn
