0x9ED160: fld     ds:flt_A41328
0x9ED166: push    ecx
0x9ED167: fstp    [esp+4+var_4]; float
0x9ED16A: push    offset aFbuoyancycloth; "fBuoyancyCloth"
0x9ED16F: mov     ecx, offset flt_B37A80
0x9ED174: call    GameSetting_ConstrAndReg_float
0x9ED179: push    offset sub_A1FC20; void (__cdecl *)()
0x9ED17E: call    _atexit
0x9ED183: pop     ecx
0x9ED184: retn
