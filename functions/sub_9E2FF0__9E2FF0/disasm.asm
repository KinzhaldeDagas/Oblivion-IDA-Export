0x9E2FF0: push    48h ; 'H'
0x9E2FF2: push    offset aIhourstorespaw; "iHoursToRespawnCell"
0x9E2FF7: mov     ecx, offset iHoursToRespawnCell
0x9E2FFC: call    GameSetting_ConstrAndReg
0x9E3001: push    offset sub_A1BAF0; void (__cdecl *)()
0x9E3006: call    _atexit
0x9E300B: pop     ecx
0x9E300C: retn
