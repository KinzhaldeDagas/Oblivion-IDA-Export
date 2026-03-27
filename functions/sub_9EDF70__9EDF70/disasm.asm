0x9EDF70: fld     ds:flt_A2FE7C
0x9EDF76: push    ecx
0x9EDF77: fstp    [esp+4+var_4]; float
0x9EDF7A: push    offset aFplayerdropdis; "fPlayerDropDistance"
0x9EDF7F: mov     ecx, offset flt_B37D28
0x9EDF84: call    GameSetting_ConstrAndReg_float
0x9EDF89: push    offset sub_A20170; void (__cdecl *)()
0x9EDF8E: call    _atexit
0x9EDF93: pop     ecx
0x9EDF94: retn
