0x9E68A0: fld     ds:flt_A3744C
0x9E68A6: push    ecx
0x9E68A7: fstp    [esp+4+var_4]; float
0x9E68AA: push    offset aFdisptargetfam; "fDispTargetFameMult"
0x9E68AF: mov     ecx, offset fDispTargetFameMult
0x9E68B4: call    GameSetting_ConstrAndReg_float
0x9E68B9: push    offset sub_A1D6D0; void (__cdecl *)()
0x9E68BE: call    _atexit
0x9E68C3: pop     ecx
0x9E68C4: retn
