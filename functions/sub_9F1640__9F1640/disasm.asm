0x9F1640: push    offset aYouHaveNoItems; "You have no items that need to be recha"...
0x9F1645: push    offset aSnoitemstorech; "sNoItemsToRecharge"
0x9F164A: mov     ecx, offset stru_B38878; self
0x9F164F: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9F1654: push    offset sub_A21810; void (__cdecl *)()
0x9F1659: call    _atexit
0x9F165E: pop     ecx
0x9F165F: retn
