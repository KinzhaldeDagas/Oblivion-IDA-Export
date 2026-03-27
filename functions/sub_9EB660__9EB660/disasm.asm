0x9EB660: fld     ds:flt_A3D65C
0x9EB666: push    ecx
0x9EB667: fstp    [esp+4+var_4]; float
0x9EB66A: push    offset aFbarterhaggled; "fBarterHaggleDispMult"
0x9EB66F: mov     ecx, offset fBarterHaggleDispMult
0x9EB674: call    GameSetting_ConstrAndReg_float
0x9EB679: push    offset sub_A1F250; void (__cdecl *)()
0x9EB67E: call    _atexit
0x9EB683: pop     ecx
0x9EB684: retn
