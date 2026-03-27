0x9F1340: push    offset aAutosaving___; "Autosaving..."
0x9F1345: push    offset aSautosaving; "sAutoSaving"
0x9F134A: mov     ecx, offset dword_B387B8
0x9F134F: call    GameSetting_ConstrAndReg
0x9F1354: push    offset sub_A21690; void (__cdecl *)()
0x9F1359: call    _atexit
0x9F135E: pop     ecx
0x9F135F: retn
