0x9F3210: push    offset aThatButtonCann; "That button cannot be remapped"
0x9F3215: push    offset aSbuttonlocked; "sButtonLocked"
0x9F321A: mov     ecx, offset unk_B38ED8
0x9F321F: call    GameSetting_ConstrAndReg
0x9F3224: push    offset sub_A224D0; void (__cdecl *)()
0x9F3229: call    _atexit
0x9F322E: pop     ecx
0x9F322F: retn
