0x9DF6C0: push    offset aNorthWindSPray; "North Wind's Prayer"
0x9DF6C5: push    offset aSholidaynorthw; "sHolidayNorthWindsPrayer"
0x9DF6CA: mov     ecx, 0B351ECh; self
0x9DF6CF: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9DF6D4: push    offset sub_A1A120; void (__cdecl *)()
0x9DF6D9: call    _atexit
0x9DF6DE: pop     ecx
0x9DF6DF: retn
