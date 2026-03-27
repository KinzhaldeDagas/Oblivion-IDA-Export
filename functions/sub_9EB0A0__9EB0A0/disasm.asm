0x9EB0A0: fld     ds:flt_A56670
0x9EB0A6: push    ecx
0x9EB0A7: fstp    [esp+4+var_4]; float
0x9EB0AA: push    offset aFjumpheightmin; "fJumpHeightMin"
0x9EB0AF: mov     ecx, offset fJumpHeightMin
0x9EB0B4: call    GameSetting_ConstrAndReg_float
0x9EB0B9: push    offset sub_A1F050; void (__cdecl *)()
0x9EB0BE: call    _atexit
0x9EB0C3: pop     ecx
0x9EB0C4: retn
