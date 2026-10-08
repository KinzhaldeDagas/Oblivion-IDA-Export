0x9F0E30: push    offset aTheSummonedCre; "The Summoned Creature is not able to fi"...
0x9F0E35: push    offset aSsummonedcreat; "sSummonedCreatureFit"
0x9F0E3A: mov     ecx, offset stru_B38678; self
0x9F0E3F: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9F0E44: push    offset sub_A21410; void (__cdecl *)()
0x9F0E49: call    _atexit
0x9F0E4E: pop     ecx
0x9F0E4F: retn
