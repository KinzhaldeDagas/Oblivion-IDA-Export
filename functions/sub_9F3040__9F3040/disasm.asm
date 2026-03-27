0x9F3040: fld     ds:flt_A40360
0x9F3046: push    ecx
0x9F3047: fstp    [esp+4+var_4]; float
0x9F304A: push    offset aFpersuasionr_2; "fPersuasionReactionHate"
0x9F304F: mov     ecx, offset fPersuasionReactionHate
0x9F3054: call    GameSetting_ConstrAndReg_float
0x9F3059: push    offset sub_A22400; void (__cdecl *)()
0x9F305E: call    _atexit
0x9F3063: pop     ecx
0x9F3064: retn
