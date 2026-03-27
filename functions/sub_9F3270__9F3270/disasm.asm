0x9F3270: push    offset aResetAll; "Reset all"
0x9F3275: push    offset aScontrolsmenuc; "sControlsMenuConfirmReset1"
0x9F327A: mov     ecx, offset dword_B38EF0
0x9F327F: call    GameSetting_ConstrAndReg
0x9F3284: push    offset sub_A22500; void (__cdecl *)()
0x9F3289: call    _atexit
0x9F328E: pop     ecx
0x9F328F: retn
