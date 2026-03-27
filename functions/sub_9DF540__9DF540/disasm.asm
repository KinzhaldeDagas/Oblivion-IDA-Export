0x9DF540: push    offset aSouthWindSPray; "South Wind's Prayer"
0x9DF545: push    offset aSholidaysouthw; "sHolidaySouthWindsPrayer"
0x9DF54A: mov     ecx, offset sHolidaySouthWindsPrayer
0x9DF54F: call    GameSetting_ConstrAndReg
0x9DF554: push    offset sub_A1A060; void (__cdecl *)()
0x9DF559: call    _atexit
0x9DF55E: pop     ecx
0x9DF55F: retn
