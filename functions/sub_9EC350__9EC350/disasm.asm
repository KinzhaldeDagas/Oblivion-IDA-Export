0x9EC350: fld     ds:flt_A30634
0x9EC356: push    ecx
0x9EC357: fstp    [esp+4+var_4]; float
0x9EC35A: push    offset aFpersbullyinte; "fPersBullyIntel"
0x9EC35F: mov     ecx, offset unk_B377F8
0x9EC364: call    GameSetting_ConstrAndReg_float
0x9EC369: push    offset sub_A1F710; void (__cdecl *)()
0x9EC36E: call    _atexit
0x9EC373: pop     ecx
0x9EC374: retn
