0x9F2760: push    offset aDoYouWantToTra; "Do you want to travel to"
0x9F2765: push    offset aStravelquestio; "sTravelQuestion"
0x9F276A: mov     ecx, offset dword_B38C60
0x9F276F: call    GameSetting_ConstrAndReg
0x9F2774: push    offset sub_A21FE0; void (__cdecl *)()
0x9F2779: call    _atexit
0x9F277E: pop     ecx
0x9F277F: retn
