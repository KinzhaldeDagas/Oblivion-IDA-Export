0x9DF6C0: push    offset aNorthWindSPray; "North Wind's Prayer"
0x9DF6C5: push    offset aSholidaynorthw; "sHolidayNorthWindsPrayer"
0x9DF6CA: mov     ecx, offset sHolidayNorthWindsPrayer
0x9DF6CF: call    GameSetting_ConstrAndReg
0x9DF6D4: push    offset sub_A1A120; void (__cdecl *)()
0x9DF6D9: call    _atexit
0x9DF6DE: pop     ecx
0x9DF6DF: retn
