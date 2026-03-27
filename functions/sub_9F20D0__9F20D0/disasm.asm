0x9F20D0: push    offset aYouCannotSle_1; "You cannot sleep when enemies are near "...
0x9F20D5: push    offset aSnosleephostil; "sNoSleepHostilActorsNear"
0x9F20DA: mov     ecx, offset dword_B38AC0
0x9F20DF: call    GameSetting_ConstrAndReg
0x9F20E4: push    offset sub_A21CA0; void (__cdecl *)()
0x9F20E9: call    _atexit
0x9F20EE: pop     ecx
0x9F20EF: retn
