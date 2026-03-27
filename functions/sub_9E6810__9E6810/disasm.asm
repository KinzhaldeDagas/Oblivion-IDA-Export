0x9E6810: fld1
0x9E6812: push    ecx
0x9E6813: fstp    [esp+4+var_4]; float
0x9E6816: mov     ecx, offset fDispActorPerMult
0x9E681B: push    offset aFdispactorperm; "fDispActorPerMult"
0x9E6820: call    GameSetting_ConstrAndReg_float
0x9E6825: push    offset sub_A1D6A0; void (__cdecl *)()
0x9E682A: call    _atexit
0x9E682F: pop     ecx
0x9E6830: retn
