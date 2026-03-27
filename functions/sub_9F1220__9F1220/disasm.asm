0x9F1220: push    offset aContinueFromYo; "Continue from your last saved game?"
0x9F1225: push    offset aScontinuelasts; "sContinueLastSave"
0x9F122A: mov     ecx, offset dword_B38770
0x9F122F: call    GameSetting_ConstrAndReg
0x9F1234: push    offset sub_A21600; void (__cdecl *)()
0x9F1239: call    _atexit
0x9F123E: pop     ecx
0x9F123F: retn
