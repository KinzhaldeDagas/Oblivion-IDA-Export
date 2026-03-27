0x9ED870: fld     ds:flt_A41304
0x9ED876: push    ecx
0x9ED877: fstp    [esp+4+var_4]; float
0x9ED87A: push    offset aFclothingarmor; "fClothingArmorScale"
0x9ED87F: mov     ecx, offset flt_B37BB0
0x9ED884: call    GameSetting_ConstrAndReg_float
0x9ED889: push    offset sub_A1FE80; void (__cdecl *)()
0x9ED88E: call    _atexit
0x9ED893: pop     ecx
0x9ED894: retn
