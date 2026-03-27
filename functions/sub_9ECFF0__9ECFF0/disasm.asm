0x9ECFF0: fld     ds:flt_A59E38
0x9ECFF6: push    ecx
0x9ECFF7: fstp    [esp+4+var_4]; float
0x9ECFFA: push    offset aFpotiont3alema; "fPotionT3AleMagMult"
0x9ECFFF: mov     ecx, offset fPotionT3AleMagMult
0x9ED004: call    GameSetting_ConstrAndReg_float
0x9ED009: push    offset sub_A1FBA0; void (__cdecl *)()
0x9ED00E: call    _atexit
0x9ED013: pop     ecx
0x9ED014: retn
