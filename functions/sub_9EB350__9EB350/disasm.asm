0x9EB350: fld     ds:flt_A3D65C
0x9EB356: push    ecx
0x9EB357: fstp    [esp+4+var_4]; float
0x9EB35A: push    offset aFperkjumpfatig; "fPerkJumpFatigueExpertMult"
0x9EB35F: mov     ecx, offset fPerkJumpFatigueExpertMult
0x9EB364: call    GameSetting_ConstrAndReg_float
0x9EB369: push    offset sub_A1F140; void (__cdecl *)()
0x9EB36E: call    _atexit
0x9EB373: pop     ecx
0x9EB374: retn
