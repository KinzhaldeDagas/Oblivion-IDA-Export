0x9DF540: push    offset aSouthWindSPray; "South Wind's Prayer"
0x9DF545: push    offset aSholidaysouthw; "sHolidaySouthWindsPrayer"
0x9DF54A: mov     ecx, 0B3518Ch; self
0x9DF54F: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9DF554: push    offset sub_A1A060; void (__cdecl *)()
0x9DF559: call    _atexit
0x9DF55E: pop     ecx
0x9DF55F: retn
