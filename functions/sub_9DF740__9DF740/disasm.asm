0x9DF740: push    offset aFall; "Fall"
0x9DF745: push    offset aSseasonfall; "sSeasonFall"
0x9DF74A: mov     ecx, 0B3520Ch; self
0x9DF74F: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9DF754: push    offset sub_A1A160; void (__cdecl *)()
0x9DF759: call    _atexit
0x9DF75E: pop     ecx
0x9DF75F: retn
