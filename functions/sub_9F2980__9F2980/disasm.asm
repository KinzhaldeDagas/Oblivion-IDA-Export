0x9F2980: push    offset aYouMustExitA_0; "You must exit and restart Oblivion for "...
0x9F2985: push    offset aSmustrestart; "sMustRestart"
0x9F298A: mov     ecx, offset dword_B38CE8
0x9F298F: call    GameSetting_ConstrAndReg
0x9F2994: push    offset sub_A220F0; void (__cdecl *)()
0x9F2999: call    _atexit
0x9F299E: pop     ecx
0x9F299F: retn
