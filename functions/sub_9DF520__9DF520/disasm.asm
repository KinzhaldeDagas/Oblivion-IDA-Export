0x9DF520: push    offset aNewLifeFestiva; "New Life Festival"
0x9DF525: push    offset aSholidaynewlif; "sHolidayNewLifeFestival"
0x9DF52A: mov     ecx, offset sHolidayNewLifeFestival
0x9DF52F: call    GameSetting_ConstrAndReg
0x9DF534: push    offset sub_A1A050; void (__cdecl *)()
0x9DF539: call    _atexit
0x9DF53E: pop     ecx
0x9DF53F: retn
