0x9ED840: fld     ds:fConstant_2
0x9ED846: push    ecx
0x9ED847: fstp    [esp+4+var_4]; float
0x9ED84A: push    offset aFclothingclass; "fClothingClassScale"
0x9ED84F: mov     ecx, offset flt_B37BA8
0x9ED854: call    GameSetting_ConstrAndReg_float
0x9ED859: push    offset sub_A1FE70; void (__cdecl *)()
0x9ED85E: call    _atexit
0x9ED863: pop     ecx
0x9ED864: retn
