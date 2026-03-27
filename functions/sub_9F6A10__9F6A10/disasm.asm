0x9F6A10: push    offset aReset; "Reset"
0x9F6A15: push    offset aSreset; "sReset"
0x9F6A1A: mov     ecx, offset dword_B38FF8
0x9F6A1F: call    GameSetting_ConstrAndReg
0x9F6A24: push    offset sub_A22710; void (__cdecl *)()
0x9F6A29: call    _atexit
0x9F6A2E: pop     ecx
0x9F6A2F: retn
