0x9F84F0: push    offset aMale; "Male"
0x9F84F5: push    offset aSmale; "sMale"
0x9F84FA: mov     ecx, offset sMale
0x9F84FF: call    GameSetting_ConstrAndReg
0x9F8504: push    offset sub_A23160; void (__cdecl *)()
0x9F8509: call    _atexit
0x9F850E: pop     ecx
0x9F850F: retn
