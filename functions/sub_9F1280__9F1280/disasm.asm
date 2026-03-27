0x9F1280: push    offset aYouCannotSav_0; "You cannot save right now."
0x9F1285: push    offset aScantsavenow; "sCantSaveNow"
0x9F128A: mov     ecx, offset dword_B38788
0x9F128F: call    GameSetting_ConstrAndReg
0x9F1294: push    offset sub_A21630; void (__cdecl *)()
0x9F1299: call    _atexit
0x9F129E: pop     ecx
0x9F129F: retn
