0x9E6C30: fld     ds:flt_A57770
0x9E6C36: push    ecx
0x9E6C37: fstp    [esp+4+var_4]; float
0x9E6C3A: push    offset aFfightfrienddi; "fFightFriendDispBase"
0x9E6C3F: mov     ecx, offset fFightFriendDispBase
0x9E6C44: call    GameSetting_ConstrAndReg_float
0x9E6C49: push    offset sub_A1D800; void (__cdecl *)()
0x9E6C4E: call    _atexit
0x9E6C53: pop     ecx
0x9E6C54: retn
