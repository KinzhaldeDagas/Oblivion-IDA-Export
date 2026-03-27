0x9F12A0: push    offset aQuicksaving___; "Quicksaving..."
0x9F12A5: push    offset aSquicksaving; "sQuickSaving"
0x9F12AA: mov     ecx, offset dword_B38790
0x9F12AF: call    GameSetting_ConstrAndReg
0x9F12B4: push    offset sub_A21640; void (__cdecl *)()
0x9F12B9: call    _atexit
0x9F12BE: pop     ecx
0x9F12BF: retn
