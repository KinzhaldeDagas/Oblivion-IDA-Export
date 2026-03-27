0x9F8010: push    offset aMakeTheseYourD; "Make these your default settings?"
0x9F8015: push    offset aSmakedefaults; "sMakeDefaults"
0x9F801A: mov     ecx, offset sMakeDefaults
0x9F801F: call    GameSetting_ConstrAndReg
0x9F8024: push    offset sub_A23120; void (__cdecl *)()
0x9F8029: call    _atexit
0x9F802E: pop     ecx
0x9F802F: retn
