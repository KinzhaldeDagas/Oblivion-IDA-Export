0x9F03F0: push    offset aDaysPassed; "Days Passed:"
0x9F03F5: push    offset aSmiscgamedaysp; "sMiscGameDaysPlayed"
0x9F03FA: mov     ecx, offset dword_B383E8
0x9F03FF: call    GameSetting_ConstrAndReg
0x9F0404: push    offset sub_A20EF0; void (__cdecl *)()
0x9F0409: call    _atexit
0x9F040E: pop     ecx
0x9F040F: retn
