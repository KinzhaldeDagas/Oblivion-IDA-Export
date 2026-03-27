0x9E7E70: fld     ds:flt_A37CC8
0x9E7E76: push    ecx
0x9E7E77: fstp    [esp+4+var_4]; float
0x9E7E7A: push    offset aFvanitymodeaut; "fVanityModeAutoDelay"
0x9E7E7F: mov     ecx, offset unk_B36B98
0x9E7E84: call    GameSetting_ConstrAndReg_float
0x9E7E89: push    offset sub_A1DE50; void (__cdecl *)()
0x9E7E8E: call    _atexit
0x9E7E93: pop     ecx
0x9E7E94: retn
