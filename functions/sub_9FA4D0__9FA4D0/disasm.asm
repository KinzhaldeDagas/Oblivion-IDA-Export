0x9FA4D0: push    offset aSteal; "Steal"
0x9FA4D5: push    offset aScrimetypestea; "sCrimeTypeSteal"
0x9FA4DA: mov     ecx, offset sCrimeTypeSteal
0x9FA4DF: call    GameSetting_ConstrAndReg
0x9FA4E4: push    offset sub_A23FD0; void (__cdecl *)()
0x9FA4E9: call    _atexit
0x9FA4EE: pop     ecx
0x9FA4EF: retn
