0x9E7C90: fld     ds:flt_A3744C
0x9E7C96: push    ecx
0x9E7C97: fstp    [esp+4+var_4]; float
0x9E7C9A: push    offset aFpowerattackde; "fPowerAttackDelay"
0x9E7C9F: mov     ecx, offset unk_B36B48
0x9E7CA4: call    GameSetting_ConstrAndReg_float
0x9E7CA9: push    offset sub_A1DDB0; void (__cdecl *)()
0x9E7CAE: call    _atexit
0x9E7CB3: pop     ecx
0x9E7CB4: retn
