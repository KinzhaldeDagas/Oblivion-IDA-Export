0x9EC020: fld1
0x9EC022: push    ecx
0x9EC023: fstp    [esp+4+var_4]; float
0x9EC026: mov     ecx, offset fPersAdmireStre
0x9EC02B: push    offset aFpersadmirestr; "fPersAdmireStre"
0x9EC030: call    GameSetting_ConstrAndReg_float
0x9EC035: push    offset sub_A1F600; void (__cdecl *)()
0x9EC03A: call    _atexit
0x9EC03F: pop     ecx
0x9EC040: retn
