0x9F05F0: push    offset aLargestBounty; "Largest Bounty: "
0x9F05F5: push    offset aSmisclargestbo; "sMiscLargestBounty"
0x9F05FA: mov     ecx, offset sMiscLargestBounty
0x9F05FF: call    GameSetting_ConstrAndReg
0x9F0604: push    offset sub_A20FF0; void (__cdecl *)()
0x9F0609: call    _atexit
0x9F060E: pop     ecx
0x9F060F: retn
