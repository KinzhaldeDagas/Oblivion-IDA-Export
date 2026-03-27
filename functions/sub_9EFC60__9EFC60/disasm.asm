0x9EFC60: fld1
0x9EFC62: push    ecx
0x9EFC63: fstp    [esp+4+var_4]; float
0x9EFC66: mov     ecx, offset fAbsorbCoreColorR
0x9EFC6B: push    offset aFabsorbcorecol; "fAbsorbCoreColorR"
0x9EFC70: call    GameSetting_ConstrAndReg_float
0x9EFC75: push    offset sub_A20B80; void (__cdecl *)()
0x9EFC7A: call    _atexit
0x9EFC7F: pop     ecx
0x9EFC80: retn
