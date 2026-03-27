0x9F20B0: push    offset aYouCannotSle_0; "You cannot sleep while in combat."
0x9F20B5: push    offset aSnosleepcombat; "sNoSleepCombat"
0x9F20BA: mov     ecx, offset dword_B38AB8
0x9F20BF: call    GameSetting_ConstrAndReg
0x9F20C4: push    offset sub_A21C90; void (__cdecl *)()
0x9F20C9: call    _atexit
0x9F20CE: pop     ecx
0x9F20CF: retn
