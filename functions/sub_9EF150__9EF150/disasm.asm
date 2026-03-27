0x9EF150: fld     ds:flt_A342A4
0x9EF156: push    ecx
0x9EF157: fstp    [esp+4+var_4]; float
0x9EF15A: push    offset aFmagicteleki_1; "fMagicTelekinesisMoveMax"
0x9EF15F: mov     ecx, offset fMagicTelekinesisMoveMax
0x9EF164: call    GameSetting_ConstrAndReg_float
0x9EF169: push    offset sub_A20790; void (__cdecl *)()
0x9EF16E: call    _atexit
0x9EF173: pop     ecx
0x9EF174: retn
