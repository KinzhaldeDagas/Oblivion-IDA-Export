0x9F2780: push    offset aDoYouWantToSet; "Do you want to set your marker?"
0x9F2785: push    offset aSsetmarkerques; "sSetMarkerQuestion"
0x9F278A: mov     ecx, offset dword_B38C68
0x9F278F: call    GameSetting_ConstrAndReg
0x9F2794: push    offset sub_A21FF0; void (__cdecl *)()
0x9F2799: call    _atexit
0x9F279E: pop     ecx
0x9F279F: retn
