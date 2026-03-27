0x9EEB60: fld     ds:flt_A57604
0x9EEB66: push    ecx
0x9EEB67: fstp    [esp+4+var_4]; float
0x9EEB6A: push    offset aFmagickaretu_0; "fMagickaReturnMult"
0x9EEB6F: mov     ecx, offset flt_B37F38
0x9EEB74: call    GameSetting_ConstrAndReg_float
0x9EEB79: push    offset sub_A20590; void (__cdecl *)()
0x9EEB7E: call    _atexit
0x9EEB83: pop     ecx
0x9EEB84: retn
