0x9F1B20: push    offset aYouMustFirstSe; "You must first select an item to enchan"...
0x9F1B25: push    offset aSnoitem; "sNoItem"
0x9F1B2A: mov     ecx, offset sNoItem
0x9F1B2F: call    GameSetting_ConstrAndReg
0x9F1B34: push    offset sub_A21A80; void (__cdecl *)()
0x9F1B39: call    _atexit
0x9F1B3E: pop     ecx
0x9F1B3F: retn
