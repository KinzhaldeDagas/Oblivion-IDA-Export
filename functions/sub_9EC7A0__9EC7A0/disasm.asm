0x9EC7A0: fld     ds:flt_A3744C
0x9EC7A6: push    ecx
0x9EC7A7: fstp    [esp+4+var_4]; float
0x9EC7AA: push    offset aFbribemult; "fBribeMult"
0x9EC7AF: mov     ecx, offset fBribeMult
0x9EC7B4: call    GameSetting_ConstrAndReg_float
0x9EC7B9: push    offset sub_A1F8C0; void (__cdecl *)()
0x9EC7BE: call    _atexit
0x9EC7C3: pop     ecx
0x9EC7C4: retn
