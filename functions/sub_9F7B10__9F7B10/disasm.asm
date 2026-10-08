0x9F7B10: push    offset aYouMustFirst_1; "You must first enter a valid name."
0x9F7B15: push    offset aSnonamecharact; "sNoNameCharacter"
0x9F7B1A: mov     ecx, offset stru_B39438; self
0x9F7B1F: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9F7B24: push    offset sub_A22F90; void (__cdecl *)()
0x9F7B29: call    _atexit
0x9F7B2E: pop     ecx
0x9F7B2F: retn
