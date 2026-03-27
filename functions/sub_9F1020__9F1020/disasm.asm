0x9F1020: push    offset aSave_0; "Save"
0x9F1025: push    offset aSmenudisplaysa; "sMenuDisplaySave"
0x9F102A: mov     ecx, offset dword_B386F0
0x9F102F: call    GameSetting_ConstrAndReg
0x9F1034: push    offset sub_A21500; void (__cdecl *)()
0x9F1039: call    _atexit
0x9F103E: pop     ecx
0x9F103F: retn
