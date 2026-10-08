0x9F09F0: push    offset aYouCannotRemov; "You cannot remove Quest Items from your"...
0x9F09F5: push    offset aSdropquestitem; "sDropQuestItemWarning"
0x9F09FA: mov     ecx, offset stru_B38568; self
0x9F09FF: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9F0A04: push    offset sub_A211F0; void (__cdecl *)()
0x9F0A09: call    _atexit
0x9F0A0E: pop     ecx
0x9F0A0F: retn
