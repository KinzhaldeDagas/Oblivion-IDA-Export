0x9F0AD0: push    offset aNeedAGamesetti; "Need a gamesetting description."
0x9F0AD5: push    offset aSwillpowerdesc; "sWillPowerDescription"
0x9F0ADA: mov     ecx, offset unk_B385A0
0x9F0ADF: call    GameSetting_ConstrAndReg
0x9F0AE4: push    offset sub_A21260; void (__cdecl *)()
0x9F0AE9: call    _atexit
0x9F0AEE: pop     ecx
0x9F0AEF: retn
