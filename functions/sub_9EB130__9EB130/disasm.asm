0x9EB130: fldz
0x9EB132: push    ecx
0x9EB133: fstp    [esp+4+var_4]; float
0x9EB136: mov     ecx, offset fJumpMoveBase
0x9EB13B: push    offset aFjumpmovebase; "fJumpMoveBase"
0x9EB140: call    GameSetting_ConstrAndReg_float
0x9EB145: push    offset sub_A1F080; void (__cdecl *)()
0x9EB14A: call    _atexit
0x9EB14F: pop     ecx
0x9EB150: retn
