0x9F0CF0: push    offset aAdventurer; "Adventurer"
0x9F0CF5: push    offset aScustomclassde; "sCustomClassDefaultName"
0x9F0CFA: mov     ecx, offset stru_B38628; self
0x9F0CFF: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9F0D04: push    offset sub_A21370; void (__cdecl *)()
0x9F0D09: call    _atexit
0x9F0D0E: pop     ecx
0x9F0D0F: retn
