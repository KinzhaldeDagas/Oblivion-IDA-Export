0x9E9980: fld     ds:flt_A58F98
0x9E9986: push    ecx
0x9E9987: fstp    [esp+4+var_4]; float
0x9E998A: push    offset aFarrowbouncero; "fArrowBounceRotateSpeed"
0x9E998F: mov     ecx, offset flt_B37050
0x9E9994: call    GameSetting_ConstrAndReg_float
0x9E9999: push    offset sub_A1E7C0; void (__cdecl *)()
0x9E999E: call    _atexit
0x9E99A3: pop     ecx
0x9E99A4: retn
