0x9F1820: push    offset aYouCannotDrink; "You cannot drink any more potions right"...
0x9F1825: push    offset aSmaxpotionsexc; "sMaxPotionsExceeded"
0x9F182A: mov     ecx, 0B388F0h; self
0x9F182F: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9F1834: push    offset sub_A21900; void (__cdecl *)()
0x9F1839: call    _atexit
0x9F183E: pop     ecx
0x9F183F: retn
