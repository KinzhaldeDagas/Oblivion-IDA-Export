0x9DCA40: push    offset aContinueRunnin; "Continue Running Executable?"
0x9DCA45: push    offset aScontinuetext; "sContinueText"
0x9DCA4A: mov     ecx, offset sContinueText
0x9DCA4F: call    GameSetting_ConstrAndReg
0x9DCA54: push    offset sub_A18AD0; void (__cdecl *)()
0x9DCA59: call    _atexit
0x9DCA5E: pop     ecx
0x9DCA5F: retn
