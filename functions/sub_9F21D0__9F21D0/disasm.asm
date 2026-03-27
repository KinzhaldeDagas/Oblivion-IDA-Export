0x9F21D0: push    offset aYouCannotWai_3; "You cannot wait while in the air."
0x9F21D5: push    offset aSnowaitinair; "sNoWaitInAir"
0x9F21DA: mov     ecx, offset dword_B38B00
0x9F21DF: call    GameSetting_ConstrAndReg
0x9F21E4: push    offset sub_A21D20; void (__cdecl *)()
0x9F21E9: call    _atexit
0x9F21EE: pop     ecx
0x9F21EF: retn
