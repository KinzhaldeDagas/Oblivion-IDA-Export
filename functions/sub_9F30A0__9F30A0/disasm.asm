0x9F30A0: push    41h ; 'A'
0x9F30A2: push    offset aIpersuasionmax; "iPersuasionMaxDisp"
0x9F30A7: mov     ecx, offset dword_B38E80
0x9F30AC: call    GameSetting_ConstrAndReg
0x9F30B1: push    offset sub_A22420; void (__cdecl *)()
0x9F30B6: call    _atexit
0x9F30BB: pop     ecx
0x9F30BC: retn
