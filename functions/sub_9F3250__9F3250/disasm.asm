0x9F3250: push    offset aButtonYouWantM; "button you want mapped to this action."
0x9F3255: push    offset aScontrolsmen_0; "sControlsMenuInstructions2"
0x9F325A: mov     ecx, offset dword_B38EE8
0x9F325F: call    GameSetting_ConstrAndReg
0x9F3264: push    offset sub_A224F0; void (__cdecl *)()
0x9F3269: call    _atexit
0x9F326E: pop     ecx
0x9F326F: retn
