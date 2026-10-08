0x9F0670: push    offset aPotionsMade; "Potions Made: "
0x9F0675: push    offset aSmiscpotionsma; "sMiscPotionsMade"
0x9F067A: mov     ecx, offset stru_B38488; self
0x9F067F: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9F0684: push    offset sub_A21030; void (__cdecl *)()
0x9F0689: call    _atexit
0x9F068E: pop     ecx
0x9F068F: retn
