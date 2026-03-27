0x9F0AB0: push    offset aNeedAGamesetti; "Need a gamesetting description."
0x9F0AB5: push    offset aSintellegenced; "sIntellegenceDescription"
0x9F0ABA: mov     ecx, offset unk_B38598
0x9F0ABF: call    GameSetting_ConstrAndReg
0x9F0AC4: push    offset sub_A21250; void (__cdecl *)()
0x9F0AC9: call    _atexit
0x9F0ACE: pop     ecx
0x9F0ACF: retn
