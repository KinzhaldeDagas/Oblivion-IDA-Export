0x9F07B0: push    offset aJokesTold; "Jokes Told: "
0x9F07B5: push    offset aSmiscjokestold; "sMiscJokesTold"
0x9F07BA: mov     ecx, offset dword_B384D8
0x9F07BF: call    GameSetting_ConstrAndReg
0x9F07C4: push    offset sub_A210D0; void (__cdecl *)()
0x9F07C9: call    _atexit
0x9F07CE: pop     ecx
0x9F07CF: retn
