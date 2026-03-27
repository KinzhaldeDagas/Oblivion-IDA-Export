0x9F2050: push    offset aYouCannotSleep; "You cannot sleep while trespassing."
0x9F2055: push    offset aSnosleeptrespa; "sNoSleepTrespass"
0x9F205A: mov     ecx, offset dword_B38AA0
0x9F205F: call    GameSetting_ConstrAndReg
0x9F2064: push    offset sub_A21C60; void (__cdecl *)()
0x9F2069: call    _atexit
0x9F206E: pop     ecx
0x9F206F: retn
