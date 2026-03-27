0x9F31B0: push    offset aMove; "Move"
0x9F31B5: push    offset aSmove; "sMove"
0x9F31BA: mov     ecx, offset dword_B38EC0
0x9F31BF: call    GameSetting_ConstrAndReg
0x9F31C4: push    offset sub_A224A0; void (__cdecl *)()
0x9F31C9: call    _atexit
0x9F31CE: pop     ecx
0x9F31CF: retn
