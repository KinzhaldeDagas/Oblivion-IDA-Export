0x9ECA10: fldz
0x9ECA12: push    ecx
0x9ECA13: fstp    [esp+4+var_4]; float
0x9ECA16: mov     ecx, offset fPersuasionBaseValueMinSelect
0x9ECA1B: push    offset aFpersuasionb_2; "fPersuasionBaseValueMinSelect"
0x9ECA20: call    GameSetting_ConstrAndReg_float
0x9ECA25: push    offset sub_A1F990; void (__cdecl *)()
0x9ECA2A: call    _atexit
0x9ECA2F: pop     ecx
0x9ECA30: retn
