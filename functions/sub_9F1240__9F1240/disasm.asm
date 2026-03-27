0x9F1240: push    offset aStartNewGame?; "Start new game?"
0x9F1245: push    offset aSstartnewgame; "sStartNewGame"
0x9F124A: mov     ecx, offset dword_B38778
0x9F124F: call    GameSetting_ConstrAndReg
0x9F1254: push    offset sub_A21610; void (__cdecl *)()
0x9F1259: call    _atexit
0x9F125E: pop     ecx
0x9F125F: retn
