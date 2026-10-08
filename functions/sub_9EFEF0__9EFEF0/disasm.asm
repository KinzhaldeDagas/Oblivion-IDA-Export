0x9EFEF0: push    offset aAddedToThePl_0; "added to the player's spell list"
0x9EFEF5: push    offset aSadditemtospel; "sAddItemtoSpellList"
0x9EFEFA: mov     ecx, offset stru_B382A8; self
0x9EFEFF: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9EFF04: push    offset sub_A20C70; void (__cdecl *)()
0x9EFF09: call    _atexit
0x9EFF0E: pop     ecx
0x9EFF0F: retn
