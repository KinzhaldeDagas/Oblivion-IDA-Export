0x9F1B80: push    offset aYouHaveExceede; "You have exceeded the maximum enchantme"...
0x9F1B85: push    offset aSlowsoul; "sLowSoul"
0x9F1B8A: mov     ecx, offset sLowSoul
0x9F1B8F: call    GameSetting_ConstrAndReg
0x9F1B94: push    offset sub_A21AB0; void (__cdecl *)()
0x9F1B99: call    _atexit
0x9F1B9E: pop     ecx
0x9F1B9F: retn
