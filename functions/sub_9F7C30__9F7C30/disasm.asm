0x9F7C30: push    offset aViewAvailableC; "View Available Content"
0x9F7C35: push    offset aSolddownloadsa; "sOldDownloadsAvailable"
0x9F7C3A: mov     ecx, offset unk_B39480
0x9F7C3F: call    GameSetting_ConstrAndReg
0x9F7C44: push    offset sub_A23020; void (__cdecl *)()
0x9F7C49: call    _atexit
0x9F7C4E: pop     ecx
0x9F7C4F: retn
