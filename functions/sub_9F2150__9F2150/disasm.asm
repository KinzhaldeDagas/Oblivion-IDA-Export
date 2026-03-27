0x9F2150: push    offset aYouCannotWaitW; "You cannot wait while in combat."
0x9F2155: push    offset aSnowaitincomba; "sNoWaitInCombat"
0x9F215A: mov     ecx, offset dword_B38AE0
0x9F215F: call    GameSetting_ConstrAndReg
0x9F2164: push    offset sub_A21CE0; void (__cdecl *)()
0x9F2169: call    _atexit
0x9F216E: pop     ecx
0x9F216F: retn
