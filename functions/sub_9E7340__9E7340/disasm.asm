0x9E7340: fld     ds:g_DialogueFov?
0x9E7346: push    ecx
0x9E7347: fstp    [esp+4+var_4]; float
0x9E734A: push    offset aFpickpocketmax; "fPickPocketMaxChance"
0x9E734F: mov     ecx, offset flt_B369A8
0x9E7354: call    GameSetting_ConstrAndReg_float
0x9E7359: push    offset sub_A1DA70; void (__cdecl *)()
0x9E735E: call    _atexit
0x9E7363: pop     ecx
0x9E7364: retn
