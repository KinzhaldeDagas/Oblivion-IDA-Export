0x9F1080: push    offset aNewSave; "New Save"
0x9F1085: push    offset aSmenudisplayne; "sMenuDisplayNewSave"
0x9F108A: mov     ecx, offset dword_B38708
0x9F108F: call    GameSetting_ConstrAndReg
0x9F1094: push    offset sub_A21530; void (__cdecl *)()
0x9F1099: call    _atexit
0x9F109E: pop     ecx
0x9F109F: retn
