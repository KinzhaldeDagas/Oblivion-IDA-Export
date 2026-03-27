0x9EFF90: push    offset aQuestCompleted; "Quest completed"
0x9EFF95: push    offset aSquestcomplete; "sQuestCompletedText"
0x9EFF9A: mov     ecx, offset dword_B382D0
0x9EFF9F: call    GameSetting_ConstrAndReg
0x9EFFA4: push    offset sub_A20CC0; void (__cdecl *)()
0x9EFFA9: call    _atexit
0x9EFFAE: pop     ecx
0x9EFFAF: retn
