0x9F10C0: push    offset aAutosave_0; "Autosave"
0x9F10C5: push    offset aSmenudisplayau; "sMenuDisplayAutosaveName"
0x9F10CA: mov     ecx, offset dword_B38718
0x9F10CF: call    GameSetting_ConstrAndReg
0x9F10D4: push    offset sub_A21550; void (__cdecl *)()
0x9F10D9: call    _atexit
0x9F10DE: pop     ecx
0x9F10DF: retn
