0x9F0EE0: push    offset aYouOpenedTheDo; "You opened the door with "
0x9F0EE5: push    offset aSopenwithkey; "sOpenWithKey"
0x9F0EEA: mov     ecx, offset dword_B386A0
0x9F0EEF: call    GameSetting_ConstrAndReg
0x9F0EF4: push    offset sub_A21460; void (__cdecl *)()
0x9F0EF9: call    _atexit
0x9F0EFE: pop     ecx
0x9F0EFF: retn
