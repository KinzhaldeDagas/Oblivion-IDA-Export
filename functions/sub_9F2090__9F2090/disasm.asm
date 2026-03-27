0x9F2090: push    offset aYouCannotSitOn; "You cannot sit on owned furniture."
0x9F2095: push    offset aSnositonownedf; "sNoSitOnOwnedFurniture"
0x9F209A: mov     ecx, offset dword_B38AB0
0x9F209F: call    GameSetting_ConstrAndReg
0x9F20A4: push    offset sub_A21C80; void (__cdecl *)()
0x9F20A9: call    _atexit
0x9F20AE: pop     ecx
0x9F20AF: retn
