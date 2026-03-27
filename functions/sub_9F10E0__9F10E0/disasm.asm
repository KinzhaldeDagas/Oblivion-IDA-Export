0x9F10E0: push    offset aLevel_0; "Level"
0x9F10E5: push    offset aSmenudisplayle; "sMenuDisplayLevelString"
0x9F10EA: mov     ecx, offset dword_B38720
0x9F10EF: call    GameSetting_ConstrAndReg
0x9F10F4: push    offset sub_A21560; void (__cdecl *)()
0x9F10F9: call    _atexit
0x9F10FE: pop     ecx
0x9F10FF: retn
