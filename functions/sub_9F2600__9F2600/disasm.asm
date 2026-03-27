0x9F2600: push    offset aReloadTheCurre; "Reload the current save game?"
0x9F2605: push    offset aSmiscplayerdea; "sMiscPlayerDeadMessage"
0x9F260A: mov     ecx, offset dword_B38C08
0x9F260F: call    GameSetting_ConstrAndReg
0x9F2614: push    offset sub_A21F30; void (__cdecl *)()
0x9F2619: call    _atexit
0x9F261E: pop     ecx
0x9F261F: retn
