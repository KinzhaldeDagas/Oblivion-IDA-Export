0x9F20F0: push    offset aWait; "Wait"
0x9F20F5: push    offset aSwait; "sWait"
0x9F20FA: mov     ecx, offset dword_B38AC8
0x9F20FF: call    GameSetting_ConstrAndReg
0x9F2104: push    offset sub_A21CB0; void (__cdecl *)()
0x9F2109: call    _atexit
0x9F210E: pop     ecx
0x9F210F: retn
