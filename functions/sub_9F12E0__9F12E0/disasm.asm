0x9F12E0: push    offset aYouCanTQuicksa; "You can't Quicksave while the game is p"...
0x9F12E5: push    offset aScantquicksave; "sCantQuickSave"
0x9F12EA: mov     ecx, offset dword_B387A0
0x9F12EF: call    GameSetting_ConstrAndReg
0x9F12F4: push    offset sub_A21660; void (__cdecl *)()
0x9F12F9: call    _atexit
0x9F12FE: pop     ecx
0x9F12FF: retn
