0x9E6C60: fld1
0x9E6C62: push    ecx
0x9E6C63: fstp    [esp+4+var_4]; float
0x9E6C66: mov     ecx, offset fFightFriendDispMult
0x9E6C6B: push    offset aFfightfriend_0; "fFightFriendDispMult"
0x9E6C70: call    GameSetting_ConstrAndReg_float
0x9E6C75: push    offset sub_A1D810; void (__cdecl *)()
0x9E6C7A: call    _atexit
0x9E6C7F: pop     ecx
0x9E6C80: retn
