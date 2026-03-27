0x9F1180: push    offset aTheSaveGameIsN; "The save game is no longer available.  "...
0x9F1185: push    offset aSsavegamenolon; "sSaveGameNoLongerAvailable"
0x9F118A: mov     ecx, offset dword_B38748
0x9F118F: call    GameSetting_ConstrAndReg
0x9F1194: push    offset sub_A215B0; void (__cdecl *)()
0x9F1199: call    _atexit
0x9F119E: pop     ecx
0x9F119F: retn
