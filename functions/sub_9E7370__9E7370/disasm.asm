0x9E7370: fld1
0x9E7372: push    ecx
0x9E7373: fstp    [esp+4+var_4]; float
0x9E7376: mov     ecx, offset unk_B369B0
0x9E737B: push    offset aFpicknumbase; "fPickNumBase"
0x9E7380: call    GameSetting_ConstrAndReg_float
0x9E7385: push    offset sub_A1DA80; void (__cdecl *)()
0x9E738A: call    _atexit
0x9E738F: pop     ecx
0x9E7390: retn
