0x9DB660: fld     ds:flt_A379CC
0x9DB666: push    ecx
0x9DB667: fstp    [esp+4+var_4]; float
0x9DB66A: push    offset aFcharactercont; "fCharacterControllerMultipleStepSpeed"
0x9DB66F: mov     ecx, offset flt_B33A50
0x9DB674: call    GameSetting_ConstrAndReg_float
0x9DB679: push    offset sub_A18080; void (__cdecl *)()
0x9DB67E: call    _atexit
0x9DB683: pop     ecx
0x9DB684: retn
