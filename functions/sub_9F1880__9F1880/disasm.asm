0x9F1880: push    offset aIsUnconscious_; "is unconscious."
0x9F1885: push    offset aSessentialchar; "sEssentialCharacterDown"
0x9F188A: mov     ecx, offset stru_B38908; self
0x9F188F: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9F1894: push    offset sub_A21930; void (__cdecl *)()
0x9F1899: call    _atexit
0x9F189E: pop     ecx
0x9F189F: retn
