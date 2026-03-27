0x9F23F0: push    offset aHotkey; "Hotkey"
0x9F23F5: push    offset aSquickkeystrin; "sQuickKeyString"
0x9F23FA: mov     ecx, offset dword_B38B88
0x9F23FF: call    GameSetting_ConstrAndReg
0x9F2404: push    offset sub_A21E30; void (__cdecl *)()
0x9F2409: call    _atexit
0x9F240E: pop     ecx
0x9F240F: retn
