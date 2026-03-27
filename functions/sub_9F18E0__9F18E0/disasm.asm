0x9F18E0: push    offset aClose; "Close"
0x9F18E5: push    offset aSclosebutton; "sCloseButton"
0x9F18EA: mov     ecx, offset dword_B38920
0x9F18EF: call    GameSetting_ConstrAndReg
0x9F18F4: push    offset sub_A21960; void (__cdecl *)()
0x9F18F9: call    _atexit
0x9F18FE: pop     ecx
0x9F18FF: retn
