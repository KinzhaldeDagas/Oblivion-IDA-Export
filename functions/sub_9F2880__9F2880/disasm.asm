0x9F2880: push    offset aMainMenu; "Main Menu"
0x9F2885: push    offset aSmainmenu; "sMainMenu"
0x9F288A: mov     ecx, offset dword_B38CA8
0x9F288F: call    GameSetting_ConstrAndReg
0x9F2894: push    offset sub_A22070; void (__cdecl *)()
0x9F2899: call    _atexit
0x9F289E: pop     ecx
0x9F289F: retn
