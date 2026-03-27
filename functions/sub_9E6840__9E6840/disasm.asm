0x9E6840: fldz
0x9E6842: push    ecx
0x9E6843: fstp    [esp+4+var_4]; float
0x9E6846: mov     ecx, offset fDispTargetPerBase
0x9E684B: push    offset aFdisptargetper; "fDispTargetPerBase"
0x9E6850: call    GameSetting_ConstrAndReg_float
0x9E6855: push    offset sub_A1D6B0; void (__cdecl *)()
0x9E685A: call    _atexit
0x9E685F: pop     ecx
0x9E6860: retn
