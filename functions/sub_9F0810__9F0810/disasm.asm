0x9F0810: push    offset aBooksRead; "Books Read: "
0x9F0815: push    offset aSmiscnumbooksr; "sMiscNumBooksRead"
0x9F081A: mov     ecx, offset dword_B384F0
0x9F081F: call    GameSetting_ConstrAndReg
0x9F0824: push    offset sub_A21100; void (__cdecl *)()
0x9F0829: call    _atexit
0x9F082E: pop     ecx
0x9F082F: retn
