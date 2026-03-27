0x9F7C10: push    offset aNewContentAvai; "New Content Available"
0x9F7C15: push    offset aSdownloadsavai; "sDownloadsAvailable"
0x9F7C1A: mov     ecx, offset unk_B39478
0x9F7C1F: call    GameSetting_ConstrAndReg
0x9F7C24: push    offset sub_A23010; void (__cdecl *)()
0x9F7C29: call    _atexit
0x9F7C2E: pop     ecx
0x9F7C2F: retn
