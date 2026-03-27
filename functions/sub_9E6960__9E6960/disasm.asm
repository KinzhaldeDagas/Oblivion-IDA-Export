0x9E6960: fld     ds:flt_A57620
0x9E6966: push    ecx
0x9E6967: fstp    [esp+4+var_4]; float
0x9E696A: push    offset aFdisptargetbou; "fDispTargetBountyMult"
0x9E696F: mov     ecx, offset fDispTargetBountyMult
0x9E6974: call    GameSetting_ConstrAndReg_float
0x9E6979: push    offset sub_A1D710; void (__cdecl *)()
0x9E697E: call    _atexit
0x9E6983: pop     ecx
0x9E6984: retn
