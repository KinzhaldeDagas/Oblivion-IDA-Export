0x9F22B0: push    offset aYouCannotFastT; "You cannot fast travel during combat!"
0x9F22B5: push    offset aSnofasttravelc; "sNoFastTravelCombat"
0x9F22BA: mov     ecx, offset dword_B38B38
0x9F22BF: call    GameSetting_ConstrAndReg
0x9F22C4: push    offset sub_A21D90; void (__cdecl *)()
0x9F22C9: call    _atexit
0x9F22CE: pop     ecx
0x9F22CF: retn
