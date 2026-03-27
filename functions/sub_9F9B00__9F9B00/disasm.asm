0x9F9B00: push    offset aBounty_0; "Bounty"
0x9F9B05: push    offset aSvirtuenamebou; "sVirtueNameBounty"
0x9F9B0A: mov     ecx, offset sVirtueNameBounty
0x9F9B0F: call    GameSetting_ConstrAndReg
0x9F9B14: push    offset sub_A23AF0; void (__cdecl *)()
0x9F9B19: call    _atexit
0x9F9B1E: pop     ecx
0x9F9B1F: retn
