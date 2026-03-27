0x9ECF30: fld     ds:flt_A5AD0C
0x9ECF36: push    ecx
0x9ECF37: fstp    [esp+4+var_4]; float
0x9ECF3A: push    offset aFpotiont2caldu; "fPotionT2CalDurMult"
0x9ECF3F: mov     ecx, offset fPotionT2CalDurMult
0x9ECF44: call    GameSetting_ConstrAndReg_float
0x9ECF49: push    offset sub_A1FB60; void (__cdecl *)()
0x9ECF4E: call    _atexit
0x9ECF53: pop     ecx
0x9ECF54: retn
