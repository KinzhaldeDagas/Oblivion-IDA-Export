0x9F0450: push    offset aBounty; "Bounty:"
0x9F0455: push    offset aSmiscbounty; "sMiscBounty"
0x9F045A: mov     ecx, offset sMiscBounty
0x9F045F: call    GameSetting_ConstrAndReg
0x9F0464: push    offset sub_A20F20; void (__cdecl *)()
0x9F0469: call    _atexit
0x9F046E: pop     ecx
0x9F046F: retn
