0x9EC950: fld     ds:flt_A43328
0x9EC956: push    ecx
0x9EC957: fstp    [esp+4+var_4]; float
0x9EC95A: push    offset aFpersuasionacc; "fPersuasionAccuracyMinDispostion"
0x9EC95F: mov     ecx, offset fPersuasionAccuracyMinDispostion
0x9EC964: call    GameSetting_ConstrAndReg_float
0x9EC969: push    offset sub_A1F950; void (__cdecl *)()
0x9EC96E: call    _atexit
0x9EC973: pop     ecx
0x9EC974: retn
