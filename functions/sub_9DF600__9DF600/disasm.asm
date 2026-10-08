0x9DF600: push    offset aSunSRest; "Sun's Rest"
0x9DF605: push    offset aSholidaysunsre; "sHolidaySunsRest"
0x9DF60A: mov     ecx, 0B351BCh; self
0x9DF60F: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9DF614: push    offset sub_A1A0C0; void (__cdecl *)()
0x9DF619: call    _atexit
0x9DF61E: pop     ecx
0x9DF61F: retn
