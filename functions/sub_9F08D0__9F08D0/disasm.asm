0x9F08D0: push    offset aStoresInvested; "Stores Invested In: "
0x9F08D5: push    offset aSmiscstoresinv; "sMiscStoresInvestedIn"
0x9F08DA: mov     ecx, offset dword_B38520
0x9F08DF: call    GameSetting_ConstrAndReg
0x9F08E4: push    offset sub_A21160; void (__cdecl *)()
0x9F08E9: call    _atexit
0x9F08EE: pop     ecx
0x9F08EF: retn
