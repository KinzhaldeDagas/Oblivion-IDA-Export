0x9ED660: fld     ds:fConstant_2
0x9ED666: push    ecx
0x9ED667: fstp    [esp+4+var_4]; float
0x9ED66A: push    offset aFgrabpower; "fGrabPower"
0x9ED66F: mov     ecx, offset fGrabPower
0x9ED674: call    GameSetting_ConstrAndReg_float
0x9ED679: push    offset sub_A1FDD0; void (__cdecl *)()
0x9ED67E: call    _atexit
0x9ED683: pop     ecx
0x9ED684: retn
