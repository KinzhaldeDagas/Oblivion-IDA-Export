0x9EB750: fld     ds:flt_A5A1C8
0x9EB756: push    ecx
0x9EB757: fstp    [esp+4+var_4]; float
0x9EB75A: push    offset aFbarterhaggleb; "fBarterHaggleBase"
0x9EB75F: mov     ecx, offset fBarterHaggleBase
0x9EB764: call    GameSetting_ConstrAndReg_float
0x9EB769: push    offset sub_A1F2A0; void (__cdecl *)()
0x9EB76E: call    _atexit
0x9EB773: pop     ecx
0x9EB774: retn
