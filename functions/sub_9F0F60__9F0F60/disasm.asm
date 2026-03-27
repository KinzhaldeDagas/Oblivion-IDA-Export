0x9F0F60: push    offset aThisSaveRelies; "This save relies on content that is no "...
0x9F0F65: push    offset aSsavegameconte; "sSaveGameContentIsMissing"
0x9F0F6A: mov     ecx, offset dword_B386C0
0x9F0F6F: call    GameSetting_ConstrAndReg
0x9F0F74: push    offset sub_A214A0; void (__cdecl *)()
0x9F0F79: call    _atexit
0x9F0F7E: pop     ecx
0x9F0F7F: retn
