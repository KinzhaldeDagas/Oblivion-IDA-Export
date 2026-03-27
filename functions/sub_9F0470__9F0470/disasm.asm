0x9F0470: push    offset aShiveringIsles; "Shivering Isles Bounty"
0x9F0475: push    offset aSmiscsebounty; "sMiscSEBounty"
0x9F047A: mov     ecx, offset sMiscSEBounty
0x9F047F: call    GameSetting_ConstrAndReg
0x9F0484: push    offset sub_A20F30; void (__cdecl *)()
0x9F0489: call    _atexit
0x9F048E: pop     ecx
0x9F048F: retn
