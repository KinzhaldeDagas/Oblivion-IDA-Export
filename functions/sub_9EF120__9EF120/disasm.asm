0x9EF120: fld     ds:flt_A57A64
0x9EF126: push    ecx
0x9EF127: fstp    [esp+4+var_4]; float
0x9EF12A: push    offset aFmagicteleki_0; "fMagicTelekinesisMoveAccelerate"
0x9EF12F: mov     ecx, offset fMagicTelekinesisMoveAccelerate
0x9EF134: call    GameSetting_ConstrAndReg_float
0x9EF139: push    offset sub_A20780; void (__cdecl *)()
0x9EF13E: call    _atexit
0x9EF143: pop     ecx
0x9EF144: retn
