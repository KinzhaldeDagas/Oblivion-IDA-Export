0x9DA300: push    offset aEnchantment; "Enchantment"
0x9DA305: push    offset aSmagictypeench; "sMagicTypeEnchantment"
0x9DA30A: mov     ecx, 0B3361Ch; self
0x9DA30F: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9DA314: push    offset sub_A17720; void (__cdecl *)()
0x9DA319: call    _atexit
0x9DA31E: pop     ecx
0x9DA31F: retn
