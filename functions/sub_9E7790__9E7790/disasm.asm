0x9E7790: fld     ds:flt_A342A0
0x9E7796: push    ecx
0x9E7797: fstp    [esp+4+var_4]; float
0x9E779A: push    offset aFinfamybountym; "fInfamyBountyMod"
0x9E779F: mov     ecx, offset fInfamyBountyMod
0x9E77A4: call    GameSetting_ConstrAndReg_float
0x9E77A9: push    offset sub_A1DBF0; void (__cdecl *)()
0x9E77AE: call    _atexit
0x9E77B3: pop     ecx
0x9E77B4: retn
